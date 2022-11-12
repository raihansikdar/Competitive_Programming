//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
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

#define     all(x)         x.begin(),x.end() 
#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
  int n,ans = 0;
  cin>>n;  
  string str;
  cin>>str;

  For(i,0,n)
  {
    vector<int>v(10);
    ll diff = 0;

    for(int j=i;j<min(i+228,n);j++)
    {
        auto c = str[j] - '0';

        if(v[c] == 0)
        {
            diff++;
        }
        v[c]++;
        if(*max_element(all(v)) <= diff)
        {
            ans++;
        }
    }
  }
  cout<<ans<<endl;
}

int main()
{ 
//	freopen( "input.txt","r", stdin);
//    freopen( "my_output.txt","w", stdout);

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
1
7
2
77
4
1010
5
01100
6
399996
5
23456
18
789987887987998798


--------|
OUTPUT: |
--------|
1
2
10
12
10
15
106


*/