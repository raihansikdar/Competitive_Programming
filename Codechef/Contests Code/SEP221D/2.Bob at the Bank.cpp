#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%d %d %d %d",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
	//freopen( "input.txt","r", stdin);
	//freopen( "my_output.txt","w", stdout);

	int t;

	S(t);
	while(t--)
	{
		int x,y,z,m;
		SSSS(x,y,z,m);

		int gain = y-z;
		int ans = x + (gain*m);
		p(ans);

		 
	 }

}