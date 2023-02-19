#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<iterator>
#include<cmath>
#include<cstring>
#include<limits>
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

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
    ll n,temp=0,mx=0;
    S(n);

    temp = n;
    mx = 1;

    map<ll, ll>mp;

    for(int i=2; i*i<=n; i++)
    {
       if(temp % i == 0)
       {
         ll count = 0;
         while(temp % i == 0)
         {
             count++;
             temp /= i;
         }
        
          mp[i] = count;
          if(count > mx)
          mx = count;
       }
     }

        if(temp != 1)
        mp[temp]=1;

        ll rem = 0;

        for(int i=0; i<=mx; i++){
            ll cnt = 1;
            for(auto it:mp)
            {
                if(it.second>0)
                {
                    mp[it.first]--;
                    cnt*=it.first;
                }
            }
            rem = rem + cnt;
        }
        cout<<rem - 1<<endl;
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

/*
--------|
INPUT:  |
--------|
7
100
10
864
130056192
1000000000
2
999999018


--------|
OUTPUT: |
--------|
20
10
22
118
90
2
333333009


*/