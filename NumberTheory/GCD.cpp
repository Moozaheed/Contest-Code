/* 
https://www.codechef.com/problems/GCDQ
*/

#include<bits/stdc++.h>
using ll = long long;
#define nl endl
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        int a[n+5],pre[n+5],suff[n+5];
        for(int i=1; i<=n; i++) cin >> a[i];
        pre[0] = suff[n+1] = 0;
        for(int i=1; i<=n; i++)
            pre[i] = __gcd(pre[i-1],a[i]);
        for(int i=n; i>=1; i--)
            suff[i] = __gcd(a[i],suff[i+1]);
        while(q--){
            int l,r;
            cin >> l >> r;
            cout << __gcd(pre[l-1],suff[r+1]) << nl;
        }
    }
    
    
}