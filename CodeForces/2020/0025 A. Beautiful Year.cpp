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
 
 
 
 ll y,a,b,c,d;
 S(y);
 
  
 
 for(;;)
 {
    y++;
    
    a= y/1000;
    
    b=(y/100)%10;
    
    c=(y/10)%10;
    
    d=(y%10);
 
 
   if(a!=b && a!=c && a!=d & b!=c && b!=d && c!=d)
   {
    break;
   }
 
 }
 
 p(y);
   
  return 0;
 }