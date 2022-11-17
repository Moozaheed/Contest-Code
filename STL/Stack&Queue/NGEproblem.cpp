#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    int a[n];
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    stack<int>st;
    for(int i=0; i<n; i++){
        while(!st.empty() && a[i]>st.top()){
            int top = st.top();
            m[top] = a[i];
            st.pop();
        }
        st.push(a[i]);
    }
    while(!st.empty()){
        m[st.top()] = -1;
        st.pop();
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " " << m[a[i]] << endl;
    }
}



int main(){
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
    
}