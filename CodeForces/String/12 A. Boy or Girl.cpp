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
   int count=0,i,j;
    int len = strlen(st);
   for(int i=0;i<len-1;i++)
   {
    for(int j=i+1;j<len;j++)
    {
        if(st[i]>st[j])
            swap(st[i],st[j]);
    }
   }
  
 
 
   for (int i=0; i<len;i++)
   {
        if(st[i]!=st[i+1])
            count++;
   }
 
 
   if(count%2==0)
   {
      puts("CHAT WITH HER!");
   }
   else
   {
      puts("IGNORE HIM!");
   }
   
   
    
  return 0;
 
 }