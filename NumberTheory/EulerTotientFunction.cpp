#include<bits/stdc++.h>
using ll = long long;
#define nl endl
using namespace std;
const int N = 1e6 + 5;
const ll mod = 1000000007;
std::vector<ll> v;
bool prime[N + 5];
void sieve() {
    for (int i = 2; i * i <= N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++) {
        if (!prime[i])
            v.push_back(i);
    }
}
int main(){
    sieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll ans=n;
        for(int i=0; v[i]*v[i]<=n; i++){
            if(n%v[i]==0){
                while(n%v[i]==0){
                    n/=v[i];
                }
                ans/=v[i];
                ans*=(v[i]-1);
            }
        }
        if(n>1){
            ans/=n;
            ans*=(n-1);
        }
        cout << ans << nl;
    }

}