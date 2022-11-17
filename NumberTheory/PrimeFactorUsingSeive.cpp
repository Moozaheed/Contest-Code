#include<bits/stdc++.h>
using namespace std;
#define MAXN   10000001
int spf[MAXN];
// Time Complexity : O(nloglogn)
void sieve()
{
    for (int i=1; i<MAXN; i++)
        spf[i] = -1;
    for (int i=2; i*i<MAXN; i++)
    {
        if (spf[i] == -1)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==-1)
                    spf[j] = i;
        }
    }
}

int main(){
    sieve();
    int n;
    cin >> n;
    while(n>1){
        if(spf[n]==-1){
            cout << n;
            break;
        }
        cout << spf[n] << " ";
        n/=spf[n];
    }
}