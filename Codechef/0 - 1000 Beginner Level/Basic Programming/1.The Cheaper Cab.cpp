#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);

		if(a<b) puts("FIRST");
		else if(a>b) puts("SECOND");
		else puts("ANY"); 
	}
}