#include<bits/stdc++.h>
using namespace std;
long long fact[1000001];
long long m = 1000000007;

long long power(long long a, long long n){
    long long ans = 1;
    while(n){
        if(1&n) ans = (ans*1LL*a)%m;
        n/=2;
        a = (a*1LL*a)%m;
    }
    return ans;
}


long long C(int n, int k){
    if(k>n) return 0;

    long long res = fact[n];
    res = (res*1LL*power(fact[k], m-2)) % m;
    res = (res*1LL*power(fact[n-k], m-2)) % m; 
    return res;
}

int main(){
    fact[0] = fact[1] = 1;
    for(int i=2; i<=1000000; i++){
        fact[i] = (fact[i-1] *1LL* i)%m;
    }
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << C(n,k) << endl;
    }
}