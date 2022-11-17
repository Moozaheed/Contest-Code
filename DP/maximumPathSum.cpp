#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll mat[15][15];
ll r,c;
ll dp[15][15];

ll pathSum(ll i, ll j){
    if(i==r && j==c){
        return mat[i][j];
    }
    if(i>r || j>c) return INT_MIN;
    if(dp[i][j]!=INT_MIN) return dp[i][j];
    return dp[i][j] = mat[i][j] + max(pathSum(i+1,j),pathSum(i,j+1));

}

int main(){
    cin >> r >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> mat[i][j];
            dp[i][j] = INT_MIN;
        }
    }
    cout << pathSum(1,1);
    

}