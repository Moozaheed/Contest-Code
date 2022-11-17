#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int>m;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    for(auto x:m){
        cout << x.first << " : " << x.second << endl;
    }
}