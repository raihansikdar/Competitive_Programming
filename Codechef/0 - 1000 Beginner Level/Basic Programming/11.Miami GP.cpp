#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%f %f",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int t;
	float x,y;
	S(t);

	while(t--)
	{
		cin>>x>>y;
       if(y<= x*1.07) puts("YES");
       else puts("NO");
	}

}