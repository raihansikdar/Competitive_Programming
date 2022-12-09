#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     Sf(a)           scanf("%f",&a);
#define     SSf(a,b)        scanf("%f %f",&a,&b);
#define     SSSf(a,b,c)     scanf("%f %f %f",&a,&b,&c);
#define     SSSSf(a,b,c,d)     scanf("%f %f %f %f",&a,&b,&c,&d);
#define     p(a)           printf("%lld\n",a);
#define		nn             "\n"

#define     For(i,x,y)        for( int i =int(x); i<=int(y); i++)

void solve()
{
   ll n;
   S(n);
   ll start,count=0;
   For(i,1,9)
   {
      start = i;
      while(start<=n)
      {
         count++;
         
         start = start*10 + i;
      }
   }
   p(count);
   
}

int main()
{ 
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
    	solve();
    }

    
    return 0;


}

/*
INPUT:
6
1
2
3
4
5
100


OUTPUT:
1
2
3
4
5
18


*/