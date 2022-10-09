#include<bits/stdc++.h>
using namespace std;

#define       S(a)            scanf("%d",&a);
#define       SS(a,b)         scanf("%s %s",&a,&b);
#define       p(a)            printf("%d",a);

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int t,n;

	S(t);
	while(t--)
	{
		S(n);

		if(n>98)
			puts("YES");
		else puts("NO");
	}

}