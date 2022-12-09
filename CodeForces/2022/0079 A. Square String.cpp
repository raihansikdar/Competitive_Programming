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

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
  string st;
  cin>>st;
  ll len = st.length();

  if(len>1 && len % 2 == 0)
  {
     string x = st.substr(0,len/2);
     string y = st.substr(len/2,len);

     if(x==y) puts("YES");
     else puts("NO");
  }
  else puts("NO");
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
INPUT:
10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy

OUTPUT:
NO
YES
NO
YES
YES
YES
NO
NO
NO
YES

*/