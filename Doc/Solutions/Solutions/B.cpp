#include<bits/stdc++.h>
using namespace std;
 
#define                           ll                          long long
#define                           int                         ll
#define                           ld                          long double
#define                           fi                          first
#define                           si                          second
#define                           mp                          make_pair
#define                           pb                          push_back
#define                           pi                          pair<int,int>
#define                           nd(a,b,c)                   mp(mp(a,b),c)
#define                           clr(x)                      memset(x,0,sizeof(x));
#define                           f(i,l,r)                    for(int i=l;i<=r;i++)
#define                           rf(i,r,l)                   for(int i=r;i>=l;i--)
#define                           done(i)                     cout<<"done = "<<i<<endl;
#define                           show(x,y)                   cout<<x<<" : ";for(auto z:y)cout<<z<<" ";cout<<endl;
#define                           fast                        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
const ll inf=2e18;
const int mod=1e9+7;
const int M=105;

int n,s[M][M],adj[M][M],old_s[M][M],new_s[M][M];
 
 int32_t main()
 
{
    fast
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>s[i][j];
            old_s[i][j]=s[i][j];
            new_s[i][j]=s[i][j];
        }
    }

   
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                new_s[i][j]=min(new_s[i][j],new_s[i][k]+new_s[k][j]);
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(new_s[i][j]!=old_s[i][j])
            {
                cout<<"-1\n";return 0;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
 
}
 
