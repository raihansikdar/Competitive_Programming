#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%d",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
 
 
  char st[101];
  Sc(st);
  int len=strlen(st);
 
  int small=0,large=0,i;
  for(int i=0;i<len;i++)
  {
    if(st[i]>='a' && st[i]<='z')
        small++;
    else if(st[i]>='A' && st[i]<='Z')
        large++;
  }
 
  if(small>=large)
  {
     for(int i=0;i<len;i++)
    {
         strlwr(st);
         cout<<st[i];
    }
  }
else
{
     for(int i=0;i<len;i++)
    {
         strupr(st);
         cout<<st[i];
    }
 
}
 
  return 0;
 
 }