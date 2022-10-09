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
 
    char st[1001];
 
    scanf("%s",st);
 
    int len=strlen(st);
 
    for(int i=0;i<len;i++)
    {
        if(st[0]>='a' && st[0]<='z')
       {
         st[i]=st[0]-32;
         cout<<st;
          break;
         
       }
       else
       {
        cout<<st;
         break;
       }
    
     
    } 
 return 0;
 
 }
 