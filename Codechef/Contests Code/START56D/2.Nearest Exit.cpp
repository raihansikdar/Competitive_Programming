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
	freopen( "input.txt","r", stdin);
	freopen( "my_output.txt","w", stdout);

	int t;

	S(t);
	while(t--)
	{
		int n;
		S(n);
		int a = 1;
		int z = 100;
		int x,y;
		 x= abs(n-a);
		 y= abs(n-100);

		 cout<<((x<y)?"LEFT":"RIGHT")<<nn;
	 }


    

}