#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int arr[4],i,c=0;

	for(i=0;i<4;i++)
	{
		S(arr[i]);
		if(arr[i]>=10) c++;
	}
	printf("%d\n",c);
}