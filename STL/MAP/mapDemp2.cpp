#include<bits/stdc++.h>
using namespace std;

void printmap(map<char,int>&m){
    cout << "Size of map: " << m.size() << endl;
    for(auto &x:m){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

int main(){
    map<char,int>m;
    m['a'] = 1;
    m['b'] = 1;
    m['c'] = 1;
    m['d'] = 1;
    m['e'] = 1;
    m['a']++;
    m['b'] = m['b']+1;
    printmap(m);
    auto it = m.find('a'); // find function return a iterator
    cout << "value of a is: " << it->second << endl;
    
    auto i = m.find('z'); // if there is no key that we find then iterator = m.end()
    if(i==m.end()){
        cout << "No value";
    }
    else{
         cout << "value of z is: " << it->second << endl;
    }
    cout << endl << "After erasing d\n";
    m.erase('d');
    printmap(m);

}