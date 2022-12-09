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
  char st[1001];
  char st2[1001];
  char st3[1001];
 
  scanf("%s%s%s",st,st2,st3);
 
 
  strcat(st,st2);
  
  int len =strlen(st);
  int len2 =strlen(st3);
  
 
 
  for(i=0;i<len-1;i++)
  {
     for(j=i+1;j<len;j++)
        if(st[i]>st[j])
            swap(st[i],st[j]);
  }
 
   for(i=0;i<len2-1;i++)
  {
     for(j=i+1;j<len2;j++)
        if(st3[i]>st3[j])
            swap(st3[i],st3[j]);
  }
 
 
 
  if(!strcmp(st,st3))
      puts("YES");
  else
    puts("NO");
 
  return 0;
 
 }