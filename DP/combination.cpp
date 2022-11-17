#include<bits/stdc++.h>
using namespace std;
int dp[50][50];

int nCr(int n, int r){
    if(n==r) return 1; 
    if(r==1) return n;
    if(dp[n][r]!=-1) return dp[n][r];

    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}


int main(){
    memset(dp,-1,sizeof(dp));
    int n,r;
    cin >> n >> r;
    if(n==0 || r==0){
        cout << 1;
        return 0;
    }
    if(n<r){
        cout << 0;
        return 0;
    }
    cout << nCr(n,r);
    for(int i=0; i<n; i++){
        for(int j=0; j<r; j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
}
