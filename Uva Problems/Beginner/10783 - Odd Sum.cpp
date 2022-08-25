#include<bits/stdc++.h>
using namespace std;


int main()
{
     freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	ll t,a,b,Case = 0;
	scanf("%lld",&t);
	while(t--)
	{
	  ll sum = 0;

       scanf("%lld %lld",&a,&b);
       for(int i = a;i<=b;i++)
       {
       	if(i%2 !=0)
       	{
       		sum += i;
       	}
       }
       printf("Case %lld: %lld\n",++Case,sum);

	}
}