#include<bits/stdc++.h>
using namespace std;

int main()
{

     //freopen( "input.txt","r", stdin);
     //freopen( "output.txt","w", stdout);

    int a,b,c,t,Case=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf ("%d%d%d",&a,&b,&c);

        if((a>b && a<c) || (a<b && a>c) )
            printf("Case %d: %d\n",++Case,a);

        else if((b>a && b<c) || (b<a && b>c) )
            printf("Case %d: %d\n",++Case,b);

        else if((c>a && c<b) || (c<a && c>b) )
            printf("Case %d: %d\n",++Case,c);

    }

}
