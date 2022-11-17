#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>v){
    cout << "Size of vector: " << v.size() << endl; ///O(1)
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}

vector<int> vt(vector<int> &vec){
    for(int i=0; i<vec.size(); i++){
        vec[i]+=10;
    }
    return vec;
}

int main(){
    vector<int> v = {1,5,7,3,8,3,2,5,8,3};
    // for(int i=0; i<5; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    //vector<int>temp = vt(v);
    int min = *min_element(v.begin(),v.end());
    cout << min << endl;
    int max = *max_element(v.begin(),v.end());
    cout << max << endl;
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum << endl;
    int cnt = count(v.begin(),v.end(),3);
    cout << "Occurance of 3-> " << cnt << endl;
    auto it = find(v.begin(),v.end(),10);
    if(it!=v.end()) cout << *it << endl;
    else cout << "Not found" << endl;
    reverse(v.begin()+1,v.end());
    for(auto value:v){
        cout << value << " ";
    }


}

