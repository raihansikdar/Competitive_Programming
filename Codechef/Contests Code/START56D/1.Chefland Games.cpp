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
		int a,b,c,d;
		SSSS(a,b,c,d);
		if(a==0 && b==0 && c==0 && d==0) puts("IN");
		else puts("OUT");
		 
	 }


    

}