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
    ll n,max_n =0,min_n= 10000000005;
    S(n);

    For(i,0,n)
    {
        ll x;
        S(x);
        max_n = max(max_n,x);
        min_n = min(min_n,x);
    }
    
    p(max_n - min_n);
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



/*
--------|
INPUT:  |
--------|
3
6
3 4 2 4 1 2
3
1000 1002 998
2
12 11


--------|
OUTPUT: |
--------|
3
4
1


*/