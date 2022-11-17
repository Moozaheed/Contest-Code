#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int>m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        m[c]++;
    }
    for(auto x:m){
        for(int j=0; j<x.second; j++){
            cout << x.first;
        }
    }
}