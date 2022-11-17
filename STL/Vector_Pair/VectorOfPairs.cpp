#include<bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,string>>v){
    cout << "Size of Vector: " << v.size() << endl;
    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

void printvec2(vector<pair<string,int>>v){
    cout << "Size of Vector: " << v.size() << endl;
    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

int main(){
    vector<pair<int,string>> v1;
    v1.push_back({73,"Arthi"});
    v1.push_back({66,"Rohan"});
    v1.push_back({67,"Haiman"});
    v1.push_back({70,"Sayed"});
    v1.push_back({81,"Ahsan"});

    printvec(v1);

    ///After Sorting
    sort(v1.begin(),v1.end());
    printvec(v1);

    cout << "\nUser Input\n";
    int n;
    cin >> n;
    vector<pair<string,int>> v2;
    for(int i=0; i<n; i++){
        string x;int y;
        cin >> x >> y;
        v2.push_back({x,y});
    }
    printvec2(v2);

    ///After Sorting
    cout << "\nAfter sorting\n";
    sort(v2.begin(),v2.end());
    printvec2(v2);


    v2.push_back({"Pritam",10});
    printvec2(v2);

    cout << "\nAfter erase 3rd index\n";
    v2.erase(v2.begin()+3);
    printvec2(v2);


    cout << "\nAfter erase 0th to 3rd index\n";
    v2.erase(v2.begin()+0,v2.begin()+4);
    printvec2(v2);




}

/*
5
A 73
R 66
H 67
S 70
A 50
*/

