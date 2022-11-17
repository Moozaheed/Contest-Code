#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int cn=0;
            while(n%i==0){
                cn++;
                n/=i;
            }
            cout << i << "^" << cn << endl;
        }
    }
    if(n>1) cout << n << "^" << 1 << endl;
}