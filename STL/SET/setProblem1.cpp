#include<bits/stdc++.h>
using namespace std;
//Print all unique set
int main(){
    int n;
    cin >> n;
    int a[n];
    set<pair<int,int>>s;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            s.insert({a[i],a[j]});
        }
    }
    for(auto value:s){
        cout << value.first << " " << value.second << endl;
    }

}