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
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    long long n,i,j;
    int p[1000];

    while(S(n)!=EOF && n>=0)
    {
        if(n==0) printf("0\n");

        else
        {
            i=1;
            while(n!=0)
            {
                p[i++]=n%3;
                n=n/3;
            }

            for(j=i-1; j>0; j--)
            {

                printf("%d",p[j]);

            }
             printf("\n");
        }



    }


    return 0;
}
