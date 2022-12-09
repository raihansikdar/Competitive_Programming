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
   char st[1001],st2[1001];
  while(SSc(st,st2)==2) 
  {
    int i;
   
   int len= strlen(st);
   for(i=0;i<len;i++)
   {
      if(st[i]!=st2[i])
          cout<<'1';
      else
        cout<<'0';
   }
   cout<<endl;
  }
   
 
 
  return 0;
 }