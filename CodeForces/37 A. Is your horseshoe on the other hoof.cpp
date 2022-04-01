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
	
 
  vector <ll>v;
  ll n,i,c=0;
 
  for(i=0;i<4;i++)
  {
    cin>>n;
    v.pb(n);
  }
  
  sort(v.begin(),v.end());
 
  for(i=0;i<4;i++)
  {
    
    if(v[i]!=v[i+1])
    {
        c++;
 
    }
    
  }
  cout<<" "<<4-c;
 
 
  return 0;
 }
 