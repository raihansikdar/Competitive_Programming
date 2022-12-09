#include<iostream>
#include<stdio.h>
#include<string.h>
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
     int n,count=0;
     //freopen("input.txt","r",stdin);
   S(n);
     while( n--)
     {
         int a,b,c;
         SSS(a,b,c);
         if(a==1&&  b==1 || a==1&& c==1 || b==1 && c==1 )
         {
             count++;
         }
 
     }
     p(count);
 
}
 