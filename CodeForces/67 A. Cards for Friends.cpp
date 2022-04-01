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
    ll w,h,n,c=1;
    SSS(w,h,n);
    
    while(w%2==0)
    {
        c=c*2;
        w=w/2;
    }
 
    while(h%2==0)
    {
       c=c*2;
       h= h/2;    
    }
  
    cout<<(c>=n ? "YES\n" : "NO\n");
 
   }
  return 0;   
 }