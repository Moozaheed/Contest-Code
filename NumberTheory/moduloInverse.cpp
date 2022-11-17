#include<bits/stdc++.h>
using namespace std;

int power(int a, int n, int m){
    int res = 1;
    while(n){
        if(1&n){
            res = (res*a)%m;
            n--;
        }
        n/=2;
        a = (a*a)%m;
    }
    return res;
}

int main(){
    int a,m;
    cin >> a >> m;
    cout << "a^-1 " << power(a, m-2, m) << endl;
}