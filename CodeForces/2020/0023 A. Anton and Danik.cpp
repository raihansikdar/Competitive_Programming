#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
	
 
  ll n;
  char st[100001];
  int a=0,d=0,i;
  S(n);
  while(n--)
  {
    Sc(st);
  }
  
  int len=strlen(st);
 
 for(int i=0;i<len;i++)
 
 {
    if(st[i]=='A')
        a++;
    else
        d++;
 }
 
 
 if(a>d)
    puts("Anton");
else if(d>a)
    puts("Danik");
else
    puts("Friendship");
  
 
  return 0;
 
 }
 