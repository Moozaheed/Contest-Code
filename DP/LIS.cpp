#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<int>a;
int dp[100][100];
bool sol[100][100];
int func(int idx,int prevIdx)
{
  if(idx>=a.size()){
    return 0;
  }
  if(dp[idx][prevIdx]!=-1){
    return dp[idx][prevIdx];
  }
  int p=INT_MIN,q=INT_MIN; // p=if current index include, q=not include
  if(a[idx]>a[prevIdx]){
    p=func(idx+1,idx)+1;
  }
  q=func(idx+1,prevIdx);
  if(p>q){
    sol[idx][prevIdx]=0;
  }
  else{
    sol[idx][prevIdx]=1;
  }
  return dp[idx][prevIdx]=max(p,q);
}
void printSolution(int idx,int prevIdx)
{
  if(idx>=a.size()){
    return ;
  }
  if(sol[idx][prevIdx]==0){
    cout<<a[idx]<<" ";
    printSolution(idx+1,idx);
  }
  else{
    printSolution(idx+1,prevIdx);
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  a.push_back(-1);
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  memset(dp,-1,sizeof dp);
  cout<<func(1,0)<<endl;
  printSolution(1,0);
  return 0;
}
/*
sol[x][y]=1 -> current state to q
sol[x][y]=0 -> current state to p
*/