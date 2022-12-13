//#include<bits/stdc++.h>
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
  ll n;
  cin>>n;

  string str;
  cin>>str;

  map<pair<char,char>,int>mp;
  pair<char,char>preq = {str[0],str[1]};
  mp[preq ]++;

  For(i,2,n)
  {
    pair<char,char>ab = {str[i-1],str[i]};
    if(mp[ab]!=0)
    {
        if((ab == preq  && mp[ab]>1) || (ab!= preq ))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    preq = ab;
    mp[ab]++;
  }
  cout<<"NO"<<endl;
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
6
10
codeforces
8
labacaba
5
uohhh
16
isthissuffixtree
1
x
4
momo


--------|
OUTPUT: |
--------|
NO
YES
NO
YES
NO
YES


*/