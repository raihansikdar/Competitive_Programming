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
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    int t,e,f,c,r,r1,sum;
    S(t);
    while(t--)
    {
        SSS(e,f,c);
        sum=0;
        r=e+f;
        while(r>=c)
        {
            r1=r/c;
            sum += r1;
            r= r1 +(r%c);
        }

         printf("%d\n",sum);
    }
    return 0;
}

