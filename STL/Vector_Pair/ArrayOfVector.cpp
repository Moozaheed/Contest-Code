#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v){
    cout << "Size of Vector: " << v.size() << endl;
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}

void printvec2(vector<string>&v){
    cout << "Size of Vector: " << v.size() << endl;
     for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v1[3];
    v1[0].push_back(1);
    v1[0].push_back(2);
    v1[0].push_back(3);

    v1[1].push_back(6);
    v1[1].push_back(2);

    v1[2].push_back(0);
    v1[2].push_back(3);
    v1[2].push_back(8);
    v1[2].push_back(6);

    ///v1[3].push_back(4);
    ///We cannot do it because array of vector


    for(int i=0; i<3; i++){
        sort(v1[i].begin(),v1[i].end());
        printvec(v1[i]);
    }

    ///User Input
    int n;
    cin >> n;
    vector<string>v[n];
    for(int i=0; i<n; i++){
        int vs;
        cin >> vs;
        for(int j=0; j<vs; j++){
            string x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i=0; i<n; i++){
        printvec2(v[i]);
    }
    cout << v[1][2] << endl;
}
