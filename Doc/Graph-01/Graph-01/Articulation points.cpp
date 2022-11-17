///Bismillahir Rahmanir Rahim
//Code for finding articulation points in O(n+m)
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define MAXN 500009
vector<int> G[MAXN];
bool vis[MAXN];
int timer, dis[MAXN], low[MAXN];
set<int>arti;
int n,m,k,a[M+2];
void dfs (int u, int p = -1) {
    vis[u] = true;
    dis[u] = low[u] = timer++;
    int children = 0;
    for (int i=0; i<G[u].size(); ++i) {
        int v = G[u][i];
        if (v == p)  continue;
        if (vis[v])
            low[u] = min (low[u], dis[v]);
        else {
            dfs (v, u);
            low[u] = min (low[u], low[v]);
            if (low[v] >= dis[u] && p != -1)
                //u is articulation point
                arti.insert(u);
                ++children;
        }
    }
    if (p == -1 && children > 1)
        //u is articulation point
        arti.insert(u);
        }

solve()
{

   int n,m;
   cin>>n>>m;
  for(int i=0;i<=n;i++)G[i].clear();
  for(int i=0;i<=n;i++)vis[i]=false;
   for(int i=1;i<=m;i++)
   {
       int u,v;
       cin>>u>>v;
       G[u].push_back(v);
       G[v].push_back(u);
   }
   arti.clear();
   timer=0;
   dfs(1);
   for(auto x:arti)
   {
       cout<<x<" ";
   }


  return 0;
}
