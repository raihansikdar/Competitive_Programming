#include<bits/stdc++.h>
using namespace std;

#define       S(a)            scanf("%d",&a);
#define       SS(a,b)         scanf("%d %d",&a,&b);
#define       p(a)            printf("%d\n",a);

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	int t,n,k;

	S(t);
	while(t--)
	{
		SS(n,k);
		
		int sum = (k*(k+1))/2;
		//cout<<sum<<'\n';

		// if(n>=sum)
		// 	puts("YES");
		// else puts("NO");

		cout<<((n>=sum)? "YES":"NO")<<endl;
		
		
	}

}