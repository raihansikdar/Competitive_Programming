#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
//	freopen( "input.txt","r", stdin);
//	freopen( "my_output.txt","w", stdout);

	int t;

	S(t);
	while(t--)
	{
		int x,y,z;
		SSS(x,y,z);

		int ans = (2*x + 2*y)*z;
		p(ans);

		 
	 }

}