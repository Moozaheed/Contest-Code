/* 
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7+10;
ll arr[N];

int main(){
    int n,q;
    cin >> n >> q;
    while(q--){
        int a,b,k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    for(int i=1; i<=n; i++){
        arr[i] += arr[i-1];
    }
    ll mx = *max_element(arr,arr+n+1);
    cout << mx << endl;

}