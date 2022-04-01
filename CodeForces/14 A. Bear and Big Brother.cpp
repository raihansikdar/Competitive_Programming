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
 
  
  ll a,b,x,y;
  ll i=0,sum=0,br=0;
  SS(a,b);
  for(i=1;i<10;i++)
  {
    x=0;y=0;
     x = x + (a*3);
     a=x;
 
     y= y+(b*2);
     b=y;
    
 
    if(x>y)
    {
        p(i);
        break;
    }
 
  } 
  return 0;
 }
 