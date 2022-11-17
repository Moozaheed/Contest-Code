#include<bits/stdc++.h>
using namespace std;
int a[100];
int mx = INT_MIN;

void printMx(int i){
    if(i==1){
        mx = max(mx,a[i]);
        cout << mx <<  " ";
        return ;
    }
    printMx(i-1);
    mx = max(mx,a[i]);
    cout << mx << " ";
    
}


int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    printMx(n);

}