#include<bits/stdc++.h>
using namespace std;


#define     S(a)           scanf("%d",&a);
#define     SS(a,b)        scanf("%d %d",&a,&b);
#define     SSS(a,b,c)     scanf("%d %d %d",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%d %d %d %d",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "my_output.txt","w", stdout);

	int t;

	S(t);
	while(t--)
	{
		int a,aa,b,bb;
		SSSS(a,aa,b,bb);

		if(a == b)
		{
			if(aa<bb) puts("Alice");
			else if(aa>bb) puts("Bob");
			else puts("Equal");
		}

		if(a > b || a < b)
		{
           float ap = (float) a/aa;
           float bp = (float) b/bb;

            //printf("%f  %f\n",ap,bp);
            //cout<<ap<<" "<<bp<<endl;
           
            if(ap > bp) puts("Alice");
			else if(ap < bp) puts("Bob");
			else puts("Equal");
		}

		 
	 }

}