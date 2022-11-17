#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
std::vector<int> g[N];
bool visited[N];

void dfs(int vertex) {
	cout << vertex << " ";
	// if(visited[vertex]) return;
	visited[vertex] = true;
	/** Take action on vertex after entering
	*   the vertex
	**/
	for (auto child : g[vertex]) {
		//cout << "Parent: " << vertex << ", Child: " << child << endl;
		if (visited[child]) continue;
		/** Take action on child before
		*   entering the child node
		**/
		dfs(child);
		/** Take action on child
		*   after exiting child node
		**/
	}
	/** Take action on vertex before
	*   exiting the vertex
	**/
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	//cout << g[1];
	dfs(1);
}
/*
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
