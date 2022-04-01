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
 
 
int main() 
{
  ll n,k,i,r=0;
  SS(n,k);
 
  for(i=0;i<k;i++)
  {
    r=n%10;
    if(r!=0)
    {
        n--;
        
    }
    else
    {
        n=n/10;
        
    }
  }
 
  p(n);

  return 0;
 }
 