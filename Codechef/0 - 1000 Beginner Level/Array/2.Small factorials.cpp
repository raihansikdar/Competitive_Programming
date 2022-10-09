#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     p(a)           printf("%d\n",a);

int fact(int n)
{
	if (n==1)
		return 1;
	else
		return n*fact(n-1);
}

void solve()
{
	int n;
	S(n);
	int ans = fact(n);
    p(ans);
}


int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int t;
	S(t);
	while(t--)
	{
		solve();
	}

}