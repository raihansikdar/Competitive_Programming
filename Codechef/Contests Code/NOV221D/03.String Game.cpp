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
  ll n;
  cin>>n;
  string str;
  cin>>str;

  map<char,int>mp;
  int temp = 0;
  if(str.length()%2==1)
  {
    cout<<"NO"<<endl;
  }
    
  else
  {
    For(i,0,str.length())
    {
        mp[str[i]]++;
    }
    for(auto i: mp)
    {
        if(i.second % 2)
        {
            temp = 1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(!temp) cout<<"YES"<<endl;
  }
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
4
4
abab
5
cbcba
4
abcd
6
pqprqr

--------|
OUTPUT: |
--------|
YES
NO
NO
YES

*/