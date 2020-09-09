#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		pob             pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%d",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    int n,p;
    while(S(n)==1)
    {
        int sum = n;
        while(n>=3)
        {
            p=n/3;
            sum=sum+p;
            n=p+(n%3);
        }
        if(n==2)
        {
            sum++;
        }

       printf("%d\n",sum);
    }
    return 0;
}
/*
int cola (int n)
{
   int p,r=n;
   while(n>=3)
   {
        p=(n/3 );
        r=r+p;
        n=p+ (n%3);

        if(n==2)
        {
            r++;
        }
    }
      cout<<r;
}


int main()
{
   int n;
   while(S(n)==1)
   {
       cola(n);
   }

    return 0;
}

*/
