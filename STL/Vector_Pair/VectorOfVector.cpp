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
    vector<vector<int>>v;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        vector<int>temp;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0; i<N; i++){
        printvec(v[i]);
    }

    ///Push_Back new vector in vector
    cout << "\nAfter Push\n";
    v.push_back({1,2,3,4});
    for(int i=0; i<v.size(); i++){
        printvec(v[i]);
    }

}
/*
5
3
1 2 3
4
6 4 6 7
2
4 6
5
9 8 4 3 2
1
5
*/
