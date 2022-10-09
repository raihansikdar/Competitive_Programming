#include<bits/stdc++.h>
using namespace std;

#define       S(a)            scanf("%d",&a);
#define       SS(a,b)         scanf("%d %d",&a,&b);
#define       p(a)            printf("%d",a);

int main()
{
	//freopen( "input.txt","r", stdin);
	//freopen( "output.txt","w", stdout);

	int t,x,y;

	S(t);
	while(t--)
	{
		SS(x,y);

		if(x<y) puts("REPAIR");
		else if(x>y) puts("NEW PHONE");
		else puts("ANY");
	}

}