#include<bits/stdc++.h>
using namespace std;

void printmap(map<int,string>&m){
    cout << "Size of map: " << m.size() << endl;
    for(auto &x:m){
        cout << x.first << " " << x.second << endl; // O(log(n))
    }
    cout << endl;
}


int main(){
    map<int,string> m;
    m[73] = "Arthi"; // O(log(n))
    m[10] = "Pritam";
    m[66] = "Rohan";
    m[67] = "Haiman";
    m[81] = "Ahsan";
    m.insert({70,"Sayed"});
    //map<int,string>::iterator it;

    for(auto it=m.begin(); it!=m.end(); it++){
        cout << it->first << " " << it->second << endl; // O(log(n))
    }
    cout << endl;
    printmap(m);
}