#include<bits/stdc++.h>
#define ll long long 
#define fast ios::sync_with_stdio(false);cin.tie(0)
using namespace std;

const int N = 1e5+10;


int parent[N];
int size[N];

//Initially every vertex is the root of itself
void Make(int vertex){
	parent[vertex] = vertex;
	size[vertex] = 1;
}

//Find the root of the vertex
int Find(int vertex){
	//If the vertex is the root of itself
	if(parent[vertex] == vertex) return vertex;

	// if the vertex is not the parent of itself,
    // then the vertex is not
    // the representative of his set. 
    // So we recursively call Find on its parent


	// Path Compression
	return parent[vertex] = Find(parent[vertex]);
}



void Union(int a, int b){
	a = Find(a); // Find Root of a
	b = Find(b); // Find Root of b

	// If the root is different then we have to
	// merge them
	if(a != b){
		// Union by size
		if(size[a] < size[b])
			swap(a,b);
		// The smallest tree goes under the
		// biggest tree
		parent[b] = a;

		//Size of a increase
		size[a] += size[b];
	}
}



int main(){
	int vertex,edge;
	cin >> vertex >> edge;
	std::vector<pair<int,pair<int,int> > > edgeCost;

	for(int i=1; i<=edge; i++){
		int v1,v2,cost;
		cin >> v1 >> v2 >> cost;
		edgeCost.push_back({cost,{v1,v2}});
	}
	sort(edgeCost.begin(), edgeCost.end());
	for(int i=1; i<=vertex; i++){
		Make(i);
	}
	int totalCost = 0;
	for(auto &value:edgeCost){
		int cost = value.first;
		int u = value.second.first;
		int v = value.second.second;
		if(Find(u)!=Find(v)){
			Union(u,v);
			totalCost += cost;
			cout << u << " " << v << endl;
		}
	}
	cout << totalCost << endl;
}
/*

9 14
1 2 4
1 8 8
2 3 8
2 8 11
3 4 7
3 6 4
3 9 2
4 5 9
4 6 14
5 6 10
6 7 2
7 8 1
7 9 6
8 9 7

*/