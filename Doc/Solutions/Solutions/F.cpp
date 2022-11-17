///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=100005;
int dp[M][2],n,a[M];

int32_t main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }

   for(int i=1;i<=n;i++)
   {
       if(a[i])
       {
          dp[i][1]=dp[i-1][0]+1;
          dp[i][0]=dp[i-1][1];
       }
       else
       {
           dp[i][1]=dp[i-1][1];
           dp[i][0]=dp[i-1][0]+1;
       }
   }

   int ans=0,cnt=0;

   for(int i=1;i<=n;i++)ans+=dp[i][1];
   for(int i=1;i<=n;i++)if(a[i])ans--;
   
   for(int i=1;i<=n;i++)
   {
       if(a[i])
       {
           ans-=cnt;
           cnt=0;
       }
       else cnt++;
   }

   cnt=0;
   for(int i=n;i>=1;i--)
   {
       if(a[i])
       {
           ans-=cnt;
           cnt=0;
       }
       else cnt++;
   }
   
   cout<<ans<<"\n";

}