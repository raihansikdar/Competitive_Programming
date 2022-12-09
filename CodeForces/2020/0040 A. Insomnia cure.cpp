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
	
   ll k,l,m,n,d,c=0;
   cin>>k>>l>>m>>n>>d;
 
   for(ll i=1;i<=d;i++)
 
   {
      if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        c++;
   }
 
cout<<c;
   
 
 
  return 0;
 }