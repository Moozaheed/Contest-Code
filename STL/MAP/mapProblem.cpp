#include<bits/stdc++.h>
using namespace std;
//Print those set which occuars more than 1
int main(){
    int n;
    cin >> n;
    int a[n];
    map<pair<int,int>,int>m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            m[{a[i],a[j]}]++;
        }
    }
    for(auto value:m){
        if(value.second>1){
            cout << value.first.first << " " << value.first.second << " : " << value.second << endl;
        }
    }

}