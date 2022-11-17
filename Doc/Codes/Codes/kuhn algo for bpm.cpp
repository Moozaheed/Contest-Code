/*

Minimum Vertex Cover = Maximum Matching
Minimum Edge Cover = No of Vertices-Maximum Matching
Maximum Independent Set = Minimum Edge Cover
Vertex Cover = min edges need to cover all the vertices
Edge Cover   = min vertices need to cover all the edges
Independent set= no one has connection with each other 

*/


int match[55];
bool vis[55];
int kuhn(int u)
{
    int sz=adj[u].size();
    for(int i=0;i<sz;i++)
    {
        int v=adj[u][i];
        if(vis[v]==1)continue;
        vis[v]=1;
        if(match[v]==-1 || kuhn(match[v]))
        {
            match[v]=u;
            return true;
        }
    }
    return false;
}
int bpm(int node)
{
    memset(match,-1,sizeof match);
    int cnt=0;
 //0 based index hole 0 to node-1 loop chalate hobe
    f(i,1,node)
    {
        if(adj[i].empty())continue;
        memset(vis,0,sizeof vis);
        if(kuhn(i))cnt++;
    }
    return cnt;
}