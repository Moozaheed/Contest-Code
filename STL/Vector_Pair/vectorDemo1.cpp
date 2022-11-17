#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;

    for(int i=0; i<10; i++){
        v.push_back(i);
    }

    for(int i=0; i<10; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Print element at index 14: " << v.at(14) << endl;

    cout << "Size of vector: " << v.size() << endl;

    cout << "Front element of vector: " << v.front() << endl;

    cout << "Back element of vector: " << v.back() << endl;

    cout << "Print vector element\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\nCheck is the vector is empty or not\n";
    if(v.empty()) cout << "Vector is empty\n";
    else cout << "Vector is not empty\n";

    v.clear();

    cout << "Check again\n";
    if(v.empty()) cout << "Vector is empty\n";
    else cout << "Vector is not empty\n";

}
