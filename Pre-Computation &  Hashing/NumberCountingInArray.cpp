/*
Given array a of N integers. Given Q queries and in each query given a number X. print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;


int main(){
    map<int,int> marking;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        marking[x]++;
    }
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        cout << marking[number] << endl;
    }
}