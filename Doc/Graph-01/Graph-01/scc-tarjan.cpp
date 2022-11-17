struct tarjan_scc {
  int scc[M+2], low[M+2], d[M+2], stacked[M+2];
  int ticks, current_scc;
  deque<int> s;

  tarjan_scc() {}

  void init () {
    memset(scc, -1, sizeof scc);
    memset(d, -1, sizeof d);
    memset(stacked, 0, sizeof stacked);
    s.clear();
    ticks = current_scc = 0;
  }

  void compute(vector<vector<int> > &g, int u) {
    d[u] = low[u] = ticks++;
    s.push_back(u);
    stacked[u] = true;
    for (int i = 0; i < g[u].size(); ++i) {
      int v = g[u][i];
      if (d[v] == -1)
        compute(g, v);
      if (stacked[v]) {
        low[u] = min(low[u], low[v]);
      }
    }

    if (d[u] == low[u]) { // root
      int v;
      do {
        v = s.back();s.pop_back();
        stacked[v] = false;
        scc[v] = current_scc;
      } while (u != v);
      current_scc++;
    }
  }
};

tarjan_scc k;

/// vector<vector<int> >adj(n+6) (ebhabe graph declare korte hobe)
/*
   in main function :
   k.init();
   for(each node)if(k.scc[node]==(-1))k.compute(adj,node);
  now each connected component will be coloured with 0 to current_scc-1 values
  to create scc graph -
  for(u) for(its adjacent v)
        {
          if(k.scc[u]!=k.scc[v])adj_scc[k.scc[u]].pb(k.scc[v]);
        }

*/