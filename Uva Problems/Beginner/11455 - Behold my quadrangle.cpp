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
#define 	SSSS(a,b,c,d)    scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    ll a,b,c,d;
    int t;
    S(t);
    while(t--)
    {
        SSSS(a,b,c,d);
        if(!((a>=b+c+d) || (b>=a+c+d) || (c>= a+b+d) || (d>=a+b+c)))
        {
               if(a==b && b==c && c==d) puts("square");
               else if((a==b && c==d) || (a==c && b==d) ||(a==d && b==c)) puts("rectangle");
               else puts("quadrangle");
        }
        else puts("banana");

    }

    return 0;
}
/*

void sr(int a,int b,int c,int d)
{
    if(!((a>=b+c+d) || (b>=a+c+d) || (c>= a+b+d) || (d>=a+b+c+d)))
    {
        if(a==b && b==c && c==d)  puts("square");
        else if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))  puts("rectangle");
        else puts("quadrangle");

    }
    else puts("banana");

}


int main()
{
    int t,a,b,c,d;
    S(t);
    while(t--)
    {
         scanf("%d %d %d%d",&a,&b,&c,&d);
         sr(a,b,c,d);
    }



    return 0;
}


*/
