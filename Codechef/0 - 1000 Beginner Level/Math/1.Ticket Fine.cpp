#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int t;

	S(t);
	while(t--)
	{
		int x,p,q;
		SSS(x,p,q);

		int ans = (p-q)*x;
		p(ans);
	 }

}