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
#define 	SS(a,b)         scanf("%d %d",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    int t,cs=0;
    long long  int a,b,c;
    S(t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case %d: ",++cs);
        if(a+b<=c||b+c<=a||c+a<=b)printf("Invalid\n");
        else if(a==b&&b==c)printf("Equilateral\n");
        else if(a==b||b==c||c==a)printf("Isosceles\n");
        else printf("Scalene\n");

    }


    return 0;

}

/*
void triangle(int a,int b,int c)
{

    if(!((a>=b+c) || (b>=a+c) || (c>=a+b)))
    {
        if(a==b && b==c) puts("Equilateral");
        else if(a==b || a==c || b==c) puts("Isosceles");
            else puts("Scalene");
    }
    else puts("Invalid");
}


int main()
{
    int t,Case=0;
    ll a,b,c;
    S(t);
    while(t--)
    {
        SSS(a,b,c);
        printf("Case %d: ",++Case);
        triangle(a,b,c);
    }
    return 0;
}

*/



