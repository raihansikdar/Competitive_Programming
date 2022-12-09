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
   ll n,p,q,arr[1001],c=0;
 while( SS(n,p)==2 )
 {
     for(ll i=0;i<p;i++)
   {
    S(arr[i]);
   }
   
   S(q);
   for(ll i=p;i<p+q;i++)
   {
    S(arr[i]);
   }
 
  sort(arr,arr+(p+q));
 
  
 
 for(ll i=0;i<p+q;i++)
 {
    if(arr[i]!=arr[i+1])
          c++;
 }
 
 if(c==n)
    puts("I become the guy.");
 
else
    puts("Oh, my keyboard!");
 
 } 
 
  
  return 0;
 }
 