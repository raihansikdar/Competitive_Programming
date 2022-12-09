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
 
    
    ll n;
    S(n);
 
    for(ll i=1;i<n;i++)
    {
        if(i%2==0)
            printf("I love that ");
        else
            printf("I hate that ");
 
    }
 
     if(n%2==0)
            puts("I love it");
        else
            puts("I hate it");
 
 
 
  return 0;
 }
 