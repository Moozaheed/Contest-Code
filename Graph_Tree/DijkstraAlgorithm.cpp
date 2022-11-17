#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int N = 1e5 + 10;
const long long INF = 1e18+7;

//weight
std::vector<pair<int, ll>> grp[N];
std::vector<ll> dist(N, INF); //Declare all nodes INF
std::vector<int> visited(N, 0); ////Declare all nodes not visited

	//weight
set<pair<ll, int>>q; //declare set to extract minimum weight in log(n) time complexity
int parent[N];

void dijkstra(int source) {
	parent[source] = -1;
	dist[source] = 0;
	q.insert({0, source}); //insert weight 0 with source
	while (q.size()) {
		auto it = *(q.begin()); //Extract minimum weight
		int vertex = it.second; // it->first = dist, it->second = node
		ll wt = it.first;
		q.erase(q.begin());
		if (visited[vertex]) continue;
		visited[vertex] = 1;
		for (auto child : grp[vertex]) {
			int node = child.first; //
			ll weight = child.second;//one vertex to another vertex weight

			//Relaxation
			if (dist[vertex] + weight < dist[node]) {
				dist[node] = dist[vertex] + weight;
				q.insert({dist[node], node});
				parent[node] = vertex;
			}

		}
	}

}

void pathPrint(int vertex){
	if(vertex==-1) return;
	pathPrint(parent[vertex]);
	cout << vertex << " ";
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		ll wt;
		cin >> a >> b >> wt;
		grp[a].push_back({b, wt});
		// grp[b].push_back({a, wt});
	}
	dijkstra(1);
	 for (int i = 1; i <= n; i++) {
	 	cout << "Source 1 to " << i << " Minimum Shortest Path is " << dist[i] << endl;
	 }
//	if(dist[n]==INF) cout << -1;
//	else pathPrint(n);

}
/*

5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

1 - {2,2}, {4,1}

*/
