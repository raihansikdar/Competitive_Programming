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
 
   
   ll t;
   S(t);
   while(t--)
   {
    ll x,y,n,c=0,k=0;
    SSS(x,y,n);
 
 
   c = (n-y)/x;
   k = (c*x) +y;
 
   cout<<k<<endl;
    
}
   
  return 0;   
 }