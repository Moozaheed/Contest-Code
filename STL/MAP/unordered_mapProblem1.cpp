#include<bits/stdc++.h>
using namespace std;

void printmap(unordered_map<string,int>&m){
    cout << "Size of map: " << m.size() << endl;
    for(auto &x:m){
        cout << x.first << " " << x.second << endl; // O(1)
    }
    cout << endl;
}
int main(){
    unordered_map<string,int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto x:m){
        cout << x.first << " : " << x.second << endl;
    }

}