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

	/* if the vertex is not the parent of itself,
     then the vertex is not
     the representative of his set. 
     So we recursively call Find on its parent */


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



int main()
{
  int n,k;
  cin >> n >> k;
  for(int i=1; i<=n; i++){
  	Make(i);
  }
  while(k--){
  	int u,v;
  	cin >> u >> v;
  	Union(u,v);
  }
  int connected_cn = 0;
  for(int i=1; i<=n; i++){
  	if(Find(i)==i) connected_cn++;
  }
  cout << connected_cn << endl;
    
}
/*
10 6
1 2
2 4
3 6
3 9
10 5
7 10

Answer-4

*/