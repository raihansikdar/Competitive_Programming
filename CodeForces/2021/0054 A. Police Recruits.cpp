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
   
   ll n,x,c=0,d=0,f=0;
   S(n);
 
    while(n--)
   {
     S(x);
    
     if(x>0)
     {
         c = c+x;
         
     }
       
    else if(x<0)
    {
      if(c>0)
        c--;
 
    else
      d++; 
        
       
    }
   }
 
   cout<<d<<endl;
   
  return 0;   
 }