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

	int n;

	S(n);
	int arr[n],i,even=0,odd=0;

	for(i=0;i<n;i++)
	{
        S(arr[i]);
        if(arr[i]%2==0)
        	even++;
        else odd++;
	}

	if(even>odd) puts("READY FOR BATTLE");
	else puts("NOT READY");

}