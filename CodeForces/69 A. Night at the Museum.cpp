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
 
   char st[10001];
   
   ll i,def,start,r=0;
   Sc(st);
   
   int len =strlen(st);
 
   start = 'a';//97
 
   for(i=0;i<len;i++)
   {
     def = abs(start - st[i]);
  
     if(def>13)
     {
        def = 26 - def;
     }
     
     r=r+def;
     start = st[i];
 
   }
   cout<<r;
   
  return 0;   
 }
 