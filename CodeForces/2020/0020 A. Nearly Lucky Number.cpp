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
	
 
 
 ll n,r=0,c=0;
 S(n);
 ll len=floor(log10(abs(n)))+1;
 
  for(int i=1;i<=len;i++)
  {
     r=n%10;
    // cout<<r<<" ";
     if(r==4 || r==7)
     {
         c++;
     }
     n=n/10;
  }
 
  if(c==4 || c==7 || c==44 ||c==77 || c==47 ||c==74 || c==444|| c==777||c==474||c==447||c==744||c==747||c==447||c==774)
  {
    puts("YES");
  }
  else
  {
    puts("NO");
  }
   
  return 0;
 }