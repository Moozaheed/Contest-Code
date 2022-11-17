#include<bits/stdc++.h>
using namespace std;

void printmap(unordered_map<int,string>&m){
    cout << "Size of map: " << m.size() << endl;
    for(auto &x:m){
        cout << x.first << " " << x.second << endl; // O(1)
    }
    cout << endl;
}


int main(){
    unordered_map<int,string> m;
    m[73] = "Arthi"; // O(1)
    m[10] = "Pritam";
    m[66] = "Rohan";
    m[67] = "Haiman";
    m[81] = "Ahsan";
    m.insert({70,"Sayed"});
    printmap(m);
    auto it = m.find(73); //O(1)
    if(it==m.end())
        cout << "No value";
    else
        cout << "value of " << it->first << " is " << it->second;
    cout << endl;
    m.erase(66); //O(1)
    printmap(m);

}