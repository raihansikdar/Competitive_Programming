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
#define 	SS(a,b)         scanf("%lf %lf",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)



int main()
{
    int t,Case=0;
    double c,i,d;
    S(t);
    while(t--){
        SS(c,i);
          d =  ((5*i)/9)+c;
         printf("Case %d: %.2lf\n",++Case,d);
    }

    return 0;
}


