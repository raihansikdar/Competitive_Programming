#include<bits/stdc++.h>
using namespace std;

#define       S(a)            scanf("%d",&a);
#define       SS(a,b)         scanf("%s %s",&a,&b);
#define       p(a)            printf("%d",a);

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	char st[1001];
	char tr[1001];
    
    S(t);  
  
	while(t--)
	{
        SS(st,tr); 
        
        int i=0;
        while(st[i]!='\0' && tr[i]!='\0')
        {
        	if(st[i]!=tr[i])
        		st[i]='B';
        	else 
        		st[i]='G';


        	i++;

        }

        printf("%s\n",st);
	}
}