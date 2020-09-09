#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb                  push_back
#define		pob                pop_back
#define		nn                  "\n"
#define		all(p)              p.begin(),p.end()
#define		zz(v)               v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss                   ' '
#define 	S(a)                scanf("%d",&a)
#define 	SS(a,b)           scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)       scanf("%d %d %d",&a,&b,&c)
#define		gcd(a,b)          __gcd(a,b)
#define		lcm(a,b)          (a*b)/gcd(a,b)
#define		pi                   acos(-1.0)

int main()
{
    int t,ct[3],marks,Case=0;
    S(t);

    while(t--)
    {
        int t1,t2,f,a;

        scanf("%d %d %d %d %d %d %d", &t1, &t2, &f, &a, ct, ct+1, ct+2);

        sort(ct,ct+3);

        marks = t1 + t2 + f + a+(ct[1] + ct[2])/2;    // x=max(ct,max(ct1,ct2));
                                                                        // y=min(ct,min(ct,ct2));

        printf("Case %d: ",++Case);

        if(marks>=90)
            puts("A");
        else  if(marks>=80 && marks<90)
            puts("B");
        else  if(marks>=70 && marks<80)
            puts("C");
        else  if(marks>=60 && marks<70)
            puts("D");

        else
            puts("F");
    }



    return 0;
}

