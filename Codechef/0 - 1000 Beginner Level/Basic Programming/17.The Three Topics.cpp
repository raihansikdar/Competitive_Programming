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
   ll a,b,c,x;
   SSSS(a,b,c,x);

   if(a==x || b==x || c==x ) puts("Yes");
   else puts("No");
}

int main()
{ 
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    	solve();
  
    return 0;
}