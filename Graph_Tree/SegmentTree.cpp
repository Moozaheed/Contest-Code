#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
int arr[N];
int seg[4*N];

void segmentTree(int node,int begin,int end){
	if(begin==end){
		seg[node] = arr[begin];
		return;
	}
	int Left = 2*node;
	int Right = 2*node+1;
	int mid = (begin+end)/2;
	segmentTree(Left,begin,mid);
	segmentTree(Right,mid+1,end);

	seg[node] = seg[Left] + seg[Right];
}
             //  1,       1,     6,      2,     6
int rangeSum(int node,int begin,int end,int i, int j){ 
	if(i>end || j<begin) return 0;
	if(i<=begin && j>=end) return seg[node];
	int Left = 2*node;
	int Right = 2*node+1;
	int mid = (begin+end)/2;

	return rangeSum(Left,begin,mid,i,j) + rangeSum(Right,mid+1,end,i,j);

}

void updateSegTree(int node,int begin,int end,int i,int item){
	if(i>end || i<begin) return;
	if(i<=begin && i>=end){
		seg[node] = item;
		return;
	}
	int Left = 2*node;
	int Right = 2*node+1;
	int mid = (begin+end)/2;
	updateSegTree(Left,begin,mid,i,item);
	updateSegTree(Right,mid+1,end,i,item);
	seg[node] = seg[Left] + seg[Right];
}



int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> arr[i];
	}
	segmentTree(1,1,n);
	int q;
	cin >> q;
	while(q--){
		int x,l,r;
		cin >> x >> l >> r;
		if(x==1) cout << rangeSum(1,1,n,l,r) << endl;
		else updateSegTree(1,1,n,l,r);
	}

}