#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool prime[90000001];

void sieve()
{
    int maxN = 90000000;
    prime[0]=prime[1]=true;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= maxN; j += i){
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <=maxN; i++)
    {
        if(!prime[i])
            v.push_back(i);
    }
    
    
}
const int maxN = 1e6+10;
vector<long long> v;
bool prime[maxN+1];
void sieve()
{
    for (int i = 2; i * i <= maxN; i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= maxN; j += i){
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <=maxN; i++)
    {
        if(!prime[i])
            v.push_back(i);
    }
    
    
}

int main(){
// 	#ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif // ONLINE_JUDGE
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    sieve();
    int q,N;
    cin >> q;
    while(q--){
        cin >> N;
        cout << v[N-1] << endl;
    }

}