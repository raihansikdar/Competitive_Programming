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
  ll n,q;
  SS(n,q);
  ll arr[n],sum=0;

  For(i,0,n)
  {
    S(arr[i]);
    sum = sum + arr[i];
  }

  ll brr[q][2];
  For(i,0,q)
  {
    S(brr[i][0]);
    S(brr[i][1]);
  }
  For(i,0,q)
  {
    ll temp = brr[i][1] - brr[i][0];
    temp++;
    if(temp%2==0)
    {
      continue;
    }
    else sum++;
  }

  p(sum);

    
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