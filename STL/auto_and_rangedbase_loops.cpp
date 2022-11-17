#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    for(int x : v1){
        //Make copy of Vector's value in X
        x++;
    }
    for(int x : v1){
        cout << x << " ";
    }
    cout << endl;
    cout << "\nAfter using reference\n";
    for(int &x : v1){
        //Now we use reference which means x original value of vector 
        x++;
    }
    for(int x : v1){
        cout << x << " ";
    }
    cout << endl;
    cout << "Using auto rangedbase for loop on pair of vector\n";
    vector<pair<int,int>> v2 = {{1,2},{2,3},{3,4}};
    for(auto x:v2){
        cout << x.first << " " << x.second+1 << endl;
    }
    cout << endl;
    cout << "Using auto rangedbase for loop on vector iterator\n";
    for(auto it = v2.begin(); it!=v2.end(); it++){
        cout << (it->first) << " " << (it->second) << endl; 
    }
    cout << endl;
    


}