#include<iostream>
#include<stdio.h>
#include<string.h>
 
using namespace std;
#define          ll                long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)            scanf("%s",&a)
#define          SS(a,b)            scanf("%lld %lld",&a,&b)
#define          SSc(a,b)            scanf("%s %s",&a,&b)
 
 
int main()
{
      ll t;
    //  freopen("input.txt","r",stdin);
      S(t);
      while(t--)
      {
          ll a,b,c;
          SS(a,b);
 
          c= abs(a-b);
          c= (c/10)+(c%10!=0);
 
         printf("%lld\n",c);
      }
}