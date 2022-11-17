#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
    stack<char>st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return "NO";
            else{
                if(s[i]==')' && st.top()=='(')
                    st.pop();
                else if(s[i]=='}' && st.top()=='{')
                    st.pop();
                else if(s[i]==']' && st.top()=='[')
                    st.pop();
                else return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
    //return s;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}