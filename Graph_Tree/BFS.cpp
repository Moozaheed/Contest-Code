#include<bits/stdc++.h>
using namespace std;

std::vector<int> v[10000];
bool visited[10000];
int level[10000];

void bfs(int source){
	queue<int> q;
	q.push(source);
	visited[source] = true;
	while(!q.empty()){
		int vertex = q.front();
		q.pop();
		cout << vertex << " ";
		for(auto child:v[vertex]){
			if(!visited[child]){
				q.push(child);
				visited[child] = true;
				level[child] = level[vertex] + 1;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(1);
	cout << endl;
	for(int i=1; i<=n; i++){
		cout << i << ". " << level[i] << endl;
	}
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
