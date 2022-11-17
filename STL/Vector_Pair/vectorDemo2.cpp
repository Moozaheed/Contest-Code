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

    cout << "\nCheck the last element before pop_back: " << v.back() << endl;

    v.pop_back();
    cout << "Check the last element after pop_back: " << v.back() << endl;

    int len = v.size();
    while(len--){
        v.pop_back();
    }

    cout << "\nCheck is the vector is empty or not\n";
    if(v.empty()) cout << "Vector is empty\n";
    else cout << "Vector is not empty\n";


}
