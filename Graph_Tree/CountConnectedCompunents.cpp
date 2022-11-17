/** DFS RELATED PROBLEM **/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
std::vector<int> g[N];
bool visited[N];

vector<vector<int>> cc; // Connected Components
vector<int> curr_cc;

void dfs(int vertex){
    visited[vertex] = true;
    curr_cc.push_back(vertex);
    for(auto child:g[vertex]){
        if(visited[child]) continue;
        dfs(child);
    }
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
    int cn=0;
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
        curr_cc.clear();
        dfs(i);
        cc.push_back(curr_cc);
        cn++;
    }
    cout << "Connected Components: " << cn << endl;
    for(auto c_cc: cc){
        for(auto vertex: c_cc){
            cout << vertex << " ";
        }
        cout << endl;
    }
}
/**
8 5
1 2
2 3
2 4
3 5
6 7
**/
