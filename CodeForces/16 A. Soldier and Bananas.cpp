#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%lld %lld %lld",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
	
  
  ll k,n,w;
  ll i=0,sum=0,br=0;
  SSS(k,n,w);
  for(i=1;i<=w;i++)
  {
    sum=sum+(i*k);
  } 
 
if(sum>n)
{
     br=sum-n;
     p(br);
}
else
    puts("0");
     
  return 0;
 }