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
   
   ll a,b,c=0,d=0;
   SS(a,b);
   a=a+1;
   b=b+1;
   for(ll i=1;i<10001;i++)
   {
    a--;
    b--;
    if(a>0 && b>0)
        c++;
    else
    {
        d = max(a,b);
 
        break;
    }
   }
   cout<<c<<" "<<d/2;
 
  return 0;
 }