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
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
  ll n;
  S(n);
  ll min_1 = 0, max_1 = 0, min_2 = 0, max_2 = 0;

  For(i,0,n)
  {
    ll x,y;
    SS(x,y);

    min_1 = min(min_1,x);
    max_1 = max(max_1,x);

    min_2 = min(min_2,y);
    max_2 = max(max_2,y);
  }

  ll ans = abs(min_1)*2 + max_1*2 +abs(min_2)*2 + max_2*2;
   p(ans);
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
--------|
INPUT:  |
--------|
3
4
0 -2
1 0
-1 0
0 2
3
0 2
-3 0
0 -1
1
0 0


--------|
OUTPUT: |
--------|
12
12
0


*/