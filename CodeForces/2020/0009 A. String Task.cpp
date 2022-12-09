#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
#define 	Sc(a)            scanf("%s",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
 
#define    p(a)             printf("%s\n",a)
#define    pp(a,b)          printf("%lld %lld\n",a,b)
#define    ppp(a,b,c)       printf("%lld %lld %lld\n",a,b,c)
 
#define f(n) for(int i=0;i<n;i++)
#define for1(n) for(int i=1;i<=n;i++)
#define forj(n) for(int j=0;j<n;j++)
#define forj1(n) for(int j=1;j<=n;j++)
 
 
    int main()
    {
        string s,s2;
        cin>>s;
        int len=s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
                continue;
            else
            {
                s2+='.';
                s2+=towlower(s[i]);
            }
        }
        cout<<s2;
        return 0;
    }
 
 
 