#include<bits/stdc++.h>
using namespace std;

void printset(set<int>&s){
    cout << "size of set is: " << s.size() << endl;
    for(auto value:s){
        cout << value << endl;
    }
}

int main(){
    set<int> s;
    s.insert(73); //O(log(n))
    s.insert(70);
    s.insert(50);
    s.insert(81);
    s.insert(73);
    cout << endl;
    for(auto it=s.begin(); it!=s.end(); it++){
        cout << (*it) << endl;
    }
    auto i = s.find(73); //O(log(n))
    if(i!=s.end()){
        s.erase(i);
    }
    
    printset(s);



}