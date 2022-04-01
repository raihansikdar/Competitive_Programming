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
 
    
    ll n,k;
    SS(n,k);
    ll c=0;
 
    
 
    if(n%2==0)
    {
        c=n/2;
    }
    else
    {
        c=(n+1)/2;
    }
 
    if(k<= c)
    {
        cout << (k * 2) - 1;
    }
    else
    {
        cout << (k - c) * 2;
    }
 
 
 
  return 0;
 }