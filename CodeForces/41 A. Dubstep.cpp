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
	
    
  char str[10001];
  Sc(str);
 
   int len=strlen(str);
 
   for( int i=0;i<len;i++)
   {
 
      if(str[i]=='W' && str[i+1]=='U'&& str[i+2]=='B')
      {
            i=i+2;
            cout<<" "; 
      }
    
    else
    {
         cout<<str[i];
 
    }
 
  
   }
 
  return 0;
 }