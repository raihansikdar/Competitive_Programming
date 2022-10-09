#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	
    int t,n,k,ans=0;

    scanf("%d %d",&n,&k);

    while(n--)
    {
        scanf("%d",&t);

        if (t % k == 0) {
            ans++;
        }       
    }

    printf("%d",ans);
    
}