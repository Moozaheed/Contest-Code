/** DFS RELATED PROBLEM **/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
std::vector<int> g[N];
bool visited[N];


bool dfs(int vertex,int parent){
    visited[vertex] = true;
    bool isLoopExists = false;
    for(auto child:g[vertex]){
        if(visited[child] && child==parent) continue;
        if(visited[child]) return true;
        isLoopExists |= dfs(child,vertex);
    }
    return isLoopExists;
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
        if(dfs(i,0)) isLoopExists = true;
    }
    cout << isLoopExists << endl;

}
/**
8 6
1 2
2 3
2 4
3 5
6 7
1 5
**/
