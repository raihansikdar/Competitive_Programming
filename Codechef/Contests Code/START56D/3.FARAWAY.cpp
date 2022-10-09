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

	ll t;

	S(t);
	while(t--)
	{
		ll n,m,a,sum=0;
		SS(n,m);
		while(n--)
		{
          S(a);
          sum += max(m-a,a-1); 
		}
		cout<<sum<<nn;
		
	 }


    

}