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
  
  ll n,i;
 
  int arr[]={4,7,47,74,44,77,444,777,447,774,477,744,474,747};
  bool flag=0;
 
   S(n);
 
  for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
  {
    if(n%arr[i]==0)
    {
        flag=1;
    }
  }
 
  if(flag)
    puts("YES");
  
  else
    puts("NO");
   
  return 0;
 }