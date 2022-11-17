#include<bits/stdc++.h>
using namespace std;

int main(){
    long long base,power;
    cin >> base >> power;
    long long b=base,p=power;
    long long res=1;
    while(power){
        if(power&1){
            res*=base;
            power--;
        }
        else{
            base*=base;
            power/=2;
        }
    }
    cout << b << "^" << p << "=" << res << "\n";
}