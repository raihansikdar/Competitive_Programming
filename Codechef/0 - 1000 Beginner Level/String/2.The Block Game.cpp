#include<bits/stdc++.h>
using namespace std;

#define       S(a)            scanf("%d",&a);
#define       SS(a,b)         scanf("%s %s",&a,&b);
#define       p(a)            printf("%d\n",a);

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t,n;
    
    S(t);  
  
	while(t--)
	{
        S(n);
        int original_n = n; 
        int rem=0,sum=0;

        while(n!=0)
        {
        	rem = n % 10;
        	sum = sum*10 + rem;
        	n = n/10;
        }

        if(original_n == sum)
        	puts("wins");
        else
        	puts("loses");
	}
}