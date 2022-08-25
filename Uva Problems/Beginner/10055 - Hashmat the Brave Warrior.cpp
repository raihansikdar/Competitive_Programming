#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;
typedef     vector<ll>     vll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);

//#define     for(i,x,y)       for(int i=int(x);i<int(y);i++)

#define		pb             push_back
#define		pob            pop_back
#define		nn             "\n"


int main()
{
	// freopen( "input.txt","r", stdin);
	// freopen( "output.txt","w", stdout);

	ll a,b,diff = 0;
	while(scanf("%lld %lld",&a,&b)==2)
	{
		diff =abs(a-b);

	   printf("%lld\n",diff);
	}
	
}
