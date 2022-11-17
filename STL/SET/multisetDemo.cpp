#include<bits/stdc++.h>
using namespace std;

void printset(multiset<int>&s){
    cout << "size of set is: " << s.size() << endl;
    for(auto value:s){
        cout << value << endl;
    }
}

int main(){
    multiset<int> s;
    s.insert(73); //O(log(n))
    s.insert(70);
    s.insert(50);
    s.insert(81);
    s.insert(73);
    s.insert(50);
    cout << endl;
    printset(s);
    auto i = s.find(73); //O(log(n))
    if(i!=s.end()){
        s.erase(i);
    }
    printset(s);
    s.erase(50);
    printset(s);



}