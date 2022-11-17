#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
int phi[N+1];

void modifiedSieve(){
    for(int i=1; i<=N; i++){
        phi[i] = i;
    }
    for(int i=2; i*i<=N; i++){
        if(phi[i]==i){
            for(int j=i; j<=N; j+=i){
                phi[j] = phi[j]/i *(i-1);
                //phi[j]*=i-1;
            }
        }
    }
}

int main(){
    modifiedSieve();
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ans += (i*phi[n/i]);
            ans += ((n/i)*phi[n/(n/i)]);
        }
    }
    cout << ans << endl;
}