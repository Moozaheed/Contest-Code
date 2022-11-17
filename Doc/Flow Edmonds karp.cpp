/**
 Adjacency list implementation of Edmonds-Karp algorithm.
 For Undirected graphs, add the commented line in AddEdge.
 Source : Emaxx 
 
 Running time:  O(VE^2)
 Memory: O(V^2)
 INPUT:
     - graph, constructed using AddEdge()
     - source and sink
 
 OUTPUT:
     - maximum flow value
     - To obtain actual flow values, either keep an extra matrix,
       or save a copy of the original capacity matrix and subtract
**/
 
const int inf=1e9+7;

struct EdmondsKarp
{
    int n;
    vector< vector<int> > cap, adj;
    vector< vector<int> > actualcap;

    EdmondsKarp(int nn) {
        n = nn;
        cap = vector<vector<int> >(n,  vector<int>(n));
        actualcap = vector<vector<int> >(n,  vector<int>(n));
        adj = vector<vector<int> >(n);
    }

    void AddEdge(int u, int v, int c) {
        if (u==v)   return;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cap[u][v] += c;
        actualcap[u][v] += c;
        ///cap[v][u] += c;      // For Undirected Graphs.
    }

    int bfs(int s, int t) {
        vector<int> par(n, -1);
        par[s] = -2;
        queue<pair<int,int> > q;
        q.push({s, inf});
        int ans = 0;

        while (!q.empty()) {
            int u = q.front().first;
            int flow = q.front().second;
            q.pop();

            for (int v : adj[u]) {
                if (par[v] == -1 && cap[u][v]) {
                    par[v] = u;
                    int new_flow = min(flow, cap[u][v]);
                    if (v == t) {ans = new_flow; break;}
                    q.push({v, new_flow});
                }
            }
        }

        if (ans == 0)   return 0;
        int cur = t;
        while (cur != s) {
            int prev = par[cur];
            cap[prev][cur] -= ans;
            cap[cur][prev] += ans;
            cur = prev;
        }
        return ans;
    }

    int maxflow(int s, int t) {
        int flow = 0;
        int new_flow;
        while ((new_flow = bfs(s, t)))
            flow += new_flow;
        return flow;
    }
};
