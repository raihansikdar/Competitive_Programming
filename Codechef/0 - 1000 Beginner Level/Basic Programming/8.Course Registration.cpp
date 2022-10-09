#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	
    int t,n,m,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&m,&k);
        if ((m-k)>= n) puts("YES");
        else puts("NO");    
    }
    
}