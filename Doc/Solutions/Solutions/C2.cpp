///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define int long long
#define ll  int 
using namespace std;
 

const int mod=998244353;
const int N=1000006;

 int bm(int b, int p, int m) {
        if(p == 0) return 1%m;
        int t = bm(b,p/2,m);
        t = (1ll*t*t)%m;
        if(p&1) return 1ll*t*b%m;
        return t;
    }

 int fact[N],inv[N];

 int C(int n, int r) {
        if(n < 0 or r < 0 or r > n) return 0;
        int ret = 1ll*fact[n]*inv[r]%mod;
        ret = 1ll*ret*inv[n-r]%mod;
        return ret;
    }

 int32_t main()
 
{
    
    int n,k;
    cin>>n>>k;

    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = 1ll*fact[i-1]*i%mod;
    }
    inv[N-1] = bm(fact[N-1], mod-2, mod);
    for(int i = N-2; i >= 0; i--) {
        inv[i] = 1ll*inv[i+1]*(i+1)%mod;
    }
    
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        int x = 1ll*C(n,i)*bm(n-i,k,mod)%mod;
        if(i&1) ans -= x;
        else ans += x;
        ans %= mod;
        ans += mod;
        ans %= mod;
    }
    
    ans = 1ll*ans*inv[n]%mod;
    ans=(ans*fact[n])%mod;
    
    cout<<ans<<"\n";

    return 0;
 
}
 
