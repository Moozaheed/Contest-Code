///Stirling Number of Second Kind 
s(n,k) = n ta element k ta box e rakhbe . proti box e atleast 1 ta thakbe
box er vitore element gular order matter kore na
element gular id ase . box er id nai . (boxer id thake just fact[k]*s(n,k))
s(n+1,k)=k*s(n,k)+s(n,k-1);[recursieve formula]
s(n,k)= sum(j=0 to k){(-1)^j * ncr(k,j)*(k-j)^n}/k! (inclusion-exclusion formula) 
https://artofproblemsolving.com/wiki/index.php/Stirling_number 
typedef long long ll;
int mod = 998244353; 
const int N = 2e6 + 100;
//Template from __Ash_ code 
namespace Combi {
    int fact[N], inv[N];
 
    int bm(int b, int p, int m) {
        if(p == 0) return 1%m;
        int t = bm(b,p/2,m);
        t = (1ll*t*t)%m;
        if(p&1) return 1ll*t*b%m;
        return t;
    }
 
    int C(int n, int r) {
        if(n < 0 or r < 0 or r > n) return 0;
        int ret = 1ll*fact[n]*inv[r]%mod;
        ret = 1ll*ret*inv[n-r]%mod;
        return ret;
    }
    // X1 + X2 + ... + Xvar = Sum
    int no_of_eqns(int sum, int var) {
        return C(sum+var-1,var-1); // Xi >= 0
        // return C(sum-1,var-1); // Xi > 0
    }
    void init() {
        fact[0] = 1;
        for(int i = 1; i < N; i++) {
            fact[i] = 1ll*fact[i-1]*i%mod;
        }
        inv[N-1] = bm(fact[N-1], mod-2, mod);
        for(int i = N-2; i >= 0; i--) {
            inv[i] = 1ll*inv[i+1]*(i+1)%mod;
        }
    }
}
 
int S(int n, int k)  {
    int ans = 0;
    for(int i = 0; i <= k; i++) {
        int x = 1ll*Combi::C(k,i)*Combi::bm(k-i,n,mod)%mod;
        if(i&1) ans -= x;
        else ans += x;
        ans %= mod;
        ans += mod;
        ans %= mod;
    }
    ans = 1ll*ans*Combi::inv[k]%mod;
    return ans;
}
 main()
{
  
    Combi::init();


}