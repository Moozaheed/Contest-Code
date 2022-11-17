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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << phi[n] << endl;
    }
}