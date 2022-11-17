/* Given T Test cases and in each test case a test case a number N. Print its factorial for each test case % M
Where M = 10^9+7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
const int m = 1e9 + 7;
long long fact[n];


void factorial(){
    fact[0] = fact[1] = 1;
    for(int i=2; i<n; i++){
        fact[i] = (fact[i-1] * i) % m; 
    }
}

int main(){
    factorial();
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << fact[x] << endl;
    }
}
