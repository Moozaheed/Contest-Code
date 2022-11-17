#include<bits/stdc++.h>
using namespace std;

int wt[30],val[30];
int dp[30][110];

int knapSack(int n, int w){
	if(w==0 || n < 0) return 0;
	if(dp[n][w]!=-1) return dp[n][w];
	int ans = knapSack(n-1,w);
	if(w - wt[n] >= 0)
		ans = max(ans,knapSack(n-1,w-wt[n]) + val[n]);
	return dp[n][w] = ans;
}

int main(){
	memset(dp,-1,sizeof(dp));
	int n,w;
	cin >> n >> w;
	for(int i=0; i<n; i++){
		cin >> wt[i] >> val[i];
	}
	cout << knapSack(n-1,w);
}