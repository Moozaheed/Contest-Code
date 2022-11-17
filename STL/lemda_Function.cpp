#include<bits/stdc++.h>
using namespace std;

int main(){
    auto sum = [](int x,int y){return x+y;};
    cout << sum(5,7) << endl;

    vector<int> v = {2,-6,-3};
    cout << all_of(v.begin(),v.end(),
        [](int x){return x>0;}) << endl;
    cout << any_of(v.begin(),v.end(),
        [](int x){return x>0;}) << endl;
    cout << none_of(v.begin(),v.end(),
        [](int x){return x>0;}) << endl;
}