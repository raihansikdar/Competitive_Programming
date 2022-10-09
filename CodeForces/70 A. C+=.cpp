#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

void solve()
{
	ll a,b,n,sum=0,c=0;
    SSS(a,b,n);

    while(max(a,b)<=n)
    {
          if (a>b)
          {
              b+=a;
              c++;
          }
          else
          {
            a+=b;
            c++;
          }
    }
    p(c);
}


int main()
{ 
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
        solve();

    return 0;


}