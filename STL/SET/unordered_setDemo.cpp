#include<bits/stdc++.h>
using namespace std;

void printset(unordered_set<int>&s){
    cout << "size of set is: " << s.size() << endl;
    for(auto value:s){
        cout << value << endl;
    }
}

int main(){
    unordered_set<int> s;
    s.insert(73); //O(1)
    s.insert(70);
    s.insert(50);
    s.insert(81);
    s.insert(73);
    cout << endl;
    auto i = s.find(73); //O(1)
    if(i!=s.end()){
        s.erase(i);
    }
    printset(s);

}