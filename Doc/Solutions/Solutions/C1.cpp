///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
 
 int32_t main()
 
{
   int n,k,pos=1;
   cin>>n>>k;
   
   int cnt=k/n;
   int rem=k%n;

   for(int i=1;i<=n;i++)
   {
       int tmp_cnt=cnt;
       if(i<=rem)tmp_cnt++;
       
       cout<<tmp_cnt;

       while(tmp_cnt--)
       {
           cout<<" "<<pos++;
       }
       cout<<"\n";
       
   }

 
}
 
