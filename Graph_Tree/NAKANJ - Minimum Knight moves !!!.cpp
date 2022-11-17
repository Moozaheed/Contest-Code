#include<bits/stdc++.h>
using ll = long long;
#define nl endl
using namespace std;
const int N = 1e7;
const ll mod = 1000000007;

int level[8][8];
bool visited[8][8];
bool isValid(int x,int y){
	return x>=0 && y>=0 && x<8 && y<8;
}

std::vector<pair<int,int>> movements={
	{1,2},{-1,2},
	{-1,-2},{1,-2},
	{2,1},{2,-1},
	{-2,1},{-2,-1}
};


int bfs(int sX,int sY,int dX,int dY){
	queue<pair<int,int>> Q;
	Q.push({sX,sY});
	visited[sX][sY] = 1;
	while(!Q.empty()){
		auto v = Q.front();
		int x = v.first, y = v.second;
		// cout << x << y << endl;
		Q.pop();
		for(auto movement:movements){
			int childX = x + movement.first;
			int childY = y + movement.second;
			if(!isValid(childX,childY)) continue;
			if(!visited[childX][childY]){
				Q.push({childX,childY});
				level[childX][childY] = level[x][y]+1;
				visited[childX][childY] = 1;
			}
		}

	}
	return level[dX][dY];
}


int main() {
	int t;
	cin >> t;
	while(t--){
		memset(visited,0,sizeof(visited));
		memset(level,0,sizeof(level));
		string s1,s2;
		cin >> s1 >> s2;
		int srcX = s1[0] - 'a';
		int srcY = s1[1] - '1';
		int destX = s2[0] - 'a';
		int destY = s2[1] - '1';
		cout << bfs(srcX,srcY,destX,destY) << endl;
	}
}