#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,t,d;
    while(scanf("%d %d",&v,&t)==2)
   {
      d= v*(t*2);
    printf("%d\n",d);
   }


}
/*
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
#define 	    S(a)            scanf("%lld",&a)
#define 	    SS(a,b)         scanf("%d %d",&a,&b)
#define 	    SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int result(int v,int t)
{
    int r=v*(t*2);
    return r;
}


int main()
{
    int v,t;
   while(SS(v,t)==2)
   {
       printf("%d\n ",result(v,t));
   }


    return 0;
}
*/
