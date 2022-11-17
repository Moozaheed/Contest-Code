#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s) {
    stack<char>st;
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]<0){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(m[top] + m[s[i]] != 0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";

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