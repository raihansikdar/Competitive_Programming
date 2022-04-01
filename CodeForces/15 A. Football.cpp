#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%d",&a)
#define          Sc(a)           scanf("%s",&a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
 
 
   char st[101];
   char *tmp,*tmp2;
   gets(st);
   
  
 
    tmp=strstr(st,"1111111");
    tmp2=strstr(st,"0000000");
 
    if(tmp || tmp2)
    {
        puts("YES");
    }
 
    else{
        puts("NO");
    }
    
  return 0;
 
 }
 