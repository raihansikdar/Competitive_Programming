#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%lld %lld",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%lld %lld %lld",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%lld\n",a)
#define          pb              push_back
 
 
 
int main()
{
 // freopen("codeforcesinput.txt"," r",stdin);
   
   ll n,k;
  while( SS(n,k)==2)
  {
   ll sum=0,count=0;
   ll c = 240 - k;
   for( ll i=1 ; i<1000 ; i++)
   {
     sum+= 5*i;
     if (sum <=c)
     {
         count++;
         if(count>=n)
            break;
 
     }
 
   }
 
   cout<<count<<endl;
 
 
  }
 
  return 0;
 }
 