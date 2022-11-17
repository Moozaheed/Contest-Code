#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v){
    cout << "Size of vector: " << v.size() << endl; ///O(1)
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    vector<int>v(10,5);
    printvec(v);
    v.push_back(10);
    printvec(v);

    vector<int>v2=v;///O(n)
    printvec(v2);
    v2.push_back(10);
    printvec(v2);

    vector<int>&v3=v;
    v3.push_back(1);
    printvec(v);
    printvec(v3);


}
