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
    ll n,x=1,c=0;
    S(n);
    vector<ll> v;
    while(n!=0)
    {
        x=x*10;
        c=n%x;
        
        if(c!=0)
           v.pb(c);
        
 
        n=n-c;
            
    }
 
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

  }

  return 0;
 }