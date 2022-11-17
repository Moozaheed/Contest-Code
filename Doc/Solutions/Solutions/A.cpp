///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
const int M=100005;
int n,a[M],ans=0;

int32_t main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=i-1)ans=i;
    }
    cout<<ans<<endl;
}