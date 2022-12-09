#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
 
using namespace std;
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",&a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%lld %lld%lld",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%lld\n",a)
//#define     for(i,x,y)       for(int i=int(x);i<int(y);i++)
 
 
int main()
{
   long long n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a==0)
        {
            x= n/a;
       }
    else
        {
            x=n/a +1;
        }
    if (m%a==0)
        {
            y=m/a;
        }
    else
        {
            y=m/a +1;
        }
    cout<<x*y<<endl;
 
}