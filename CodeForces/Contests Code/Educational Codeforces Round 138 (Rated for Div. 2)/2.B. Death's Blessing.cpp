#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     Sf(a)           scanf("%f",&a);
#define     SSf(a,b)        scanf("%f %f",&a,&b);
#define     SSSf(a,b,c)     scanf("%f %f %f",&a,&b,&c);
#define     SSSSf(a,b,c,d)     scanf("%f %f %f %f",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"


void solve()
{
       ll n,m;
       S(n);
       ll arr[n],brr[n];
       ll sum = 0;

       for(ll i=0; i<n;i++)
       {
        S(arr[i]);
       }

       for(ll i=0; i<n;i++)
       {
        S(brr[i]);
       }

       int temp = brr[0];

       for(ll i=0; i<n;i++)
       {
         sum += arr[i] + brr[i];
         if(brr[i]> temp)
            temp = brr[i];
       }

       printf("%lld\n",sum-temp);

}

int main()
{ 
	//freopen( "input.txt","r", stdin);
    //freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
    	solve();
    }

    
    return 0;


}