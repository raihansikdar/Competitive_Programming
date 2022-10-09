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
 
  int i,j;
  ll n;
  char st[1001];
  S(n);
 
  while(n--)
  {
     Sc(st);
     int len=strlen(st);
     
     cout<<st[0];
     for(i=1;i<len;i+=2)
     {
        
            cout<<st[i];
     }
     cout<<endl;
  }
 
 
  return 0;
 
 }
 