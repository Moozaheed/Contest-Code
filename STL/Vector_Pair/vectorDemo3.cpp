#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(11);
    v.push_back(111);
    v.push_back(1111);
    v.push_back(11111);

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

    ///Use of Erase Function
    v.erase(v.begin()+3); //Start from 0th index

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

    ///1 11 111 11111
    ///Erase 1st index to 2nd index
    v.erase(v.begin()+1,v.begin()+3);
    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;



}
