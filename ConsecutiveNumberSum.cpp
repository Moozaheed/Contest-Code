#include<bits/stdc++.h>
using ll = long long;
#define nl endl
using namespace std;

ll CNS(ll N) {
        while(N%2==0) N/=2;        
        ll ans =1;
        for(ll oddNum = 3; oddNum*oddNum<=N; oddNum+=2){            
            ll exponent =0;
            while(N%oddNum==0){
                exponent ++;
                N/=oddNum;
            }
            ans*= (exponent +1);
        }
        if(N==1){
          return ans;  
        }else{
            return ans*2;
        }
    }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    ll c = 1;
    while(t--){
        ll n;
        cin >> n;
        cout << "Case " << c << ": " << CNS(n)-1 << nl;
        c++;
    }

}