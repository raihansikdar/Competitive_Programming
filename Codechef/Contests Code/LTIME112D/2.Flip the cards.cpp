#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%d %d %d %d",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "my_output.txt","w", stdout);

	ll t,n,x;

	S(t);
	while(t--)
	{
		SS(n,x);
		if((n == x || x==0) && x<=n)
		{
            p(0);
		 
	    }
	    else p(x);

	}	
}