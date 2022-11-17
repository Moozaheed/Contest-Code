#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph1[N][N];

std::vector<pair<int,int>> graph2[N];


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int vertices,edges;
    cin >> vertices >> edges;
    for(int i=0; i<edges; i++){
        int v1,v2,wt;
        cin >> v1 >> v2 >> wt;
        //adjacencyMatrix
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;
        //adjacencyList
        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    // Adjacency Matrix
    // O(N^2) - Space complexity
    // N!=10^5 / N <= 10^3

    //Adjacency List
    // O(N+M)
    // N = 10^5, Edges < 10^7

}
// 6 9
// 1 3 4
// 1 5 3
// 3 5 2
// 3 4 7
// 3 6 8
// 3 2 9
// 2 6 1
// 4 6 2
// 5 6 3