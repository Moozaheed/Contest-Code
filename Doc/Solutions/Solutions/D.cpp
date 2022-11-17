///Bismillahir Rahmanir Rahim
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
const int M=100005;
int a[M],n,q;

inline ll bigmod(ll B,ll P){ll R=1;while(P>0){if(P&1){R=(R*B)%mod;}P>>=1;B=(B*B)%mod;}return R;}

int  bit[M+2];
///set a[idx]+=val;
void update(int idx,int  val)
{
    while(idx < M){
        bit[idx] += val;
        idx += (idx&-idx);
    }
}
///returns the prefix sum from 0 to idx
int  qry(int idx)
{
    int  ret = 0;
    while(idx > 0){
        ret += bit[idx];
        idx -= (idx&-idx);
    }
    return ret;
}

void solve()
{   
     cin>>n>>q;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         a[i]=a[i]%2;
         update(i,a[i]);
     }
     
     while(q--)
     {
         int typ,lft,rgt;
         cin>>typ>>lft>>rgt;
         
         if(typ==1 || typ==2)
         {
             int odd_cnt=qry(rgt)-qry(lft-1);
             int even_cnt=(rgt-lft+1)-odd_cnt;
             int ans=bigmod(2LL,odd_cnt);

             if(typ==1)
             {
                  ans--;
                  ans=(ans+mod)%mod;
             }
             else
             {   
                  int z=bigmod(2LL,even_cnt);
                  z=(z-1+mod)%mod;
                  ans=(ans*z)%mod;
             }
             
             ans=ans%mod;
             cout<<ans<<"\n";

         }
         else if(typ==3)
         {
             int idx=lft,val=rgt;
             if(a[idx]%2!=val%2)
             {   
                 update(idx,-a[idx]);
                 a[idx]=1-a[idx];
                 update(idx,a[idx]);
             }
         }
     }
   
}
 
 int32_t main()
 
{
    fast
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
 
}
 
