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
        int arr[n];

        for(int i=0;i<n;i++)
        {
            S(arr[i]);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
             if(arr[i]!= arr[i-1])
             {
                c++;
             }        
        }

       printf("%d\n",c);
        
	}
}