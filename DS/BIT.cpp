#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll BIT[1000000];
ll n,q;

ll query(int idx){
    ll sum = 0;
    while(idx>0){
        sum += BIT[idx];
        idx -= (idx&-idx);
    }
    return sum;
}

void update(int idx,ll value){
    while(idx<=n){
        BIT[idx] += value;
        idx += (idx&-idx);
    }
}

int main(){
    cin >> n >> q;
    ll a[n+5];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        update(i,a[i]);
    }
    while(q--){
        ll x,y,z;
        cin >> x >> y >> z;
        if(x==1){
            ll tosum = z - a[y];
            a[y] = z;
            update(y,tosum);

        }
        else{
            ll v1 = query(z);
            ll v2 = query(y-1);
            cout << v1 - v2 << endl;
        }
    }
}