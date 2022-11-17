#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    unordered_map<int,long long> marking;
    int sum=0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        sum += a[i];
        marking[i] = sum;
    }
    int q;
    cin >> q;
    while(q--){
        int lf,rg;
        cin >> lf >> rg;
        if(lf==1)
            cout << marking[rg];
        else{
            long long ans = marking[rg] - marking[lf-1];
            cout << ans;
        }
        cout << endl;
        

    }
}