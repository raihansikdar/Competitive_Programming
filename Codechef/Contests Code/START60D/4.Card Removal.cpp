#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

#define     for(n)         for (int i=0;i<n;i++)

void solve()
{
    ll n;
    S(n);
    ll arr[n];
    map<int,int>m;

    for(n)
    {
        S(arr[i]);
        m[arr[i]]++;
    }

    int mx = 0;
    for(n)
    {
        if(mx<m[arr[i]])
            mx = m[arr[i]];
    }

    p(n-mx);
}

int main()
{ 
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
    	solve();
    }

    
    return 0;


}