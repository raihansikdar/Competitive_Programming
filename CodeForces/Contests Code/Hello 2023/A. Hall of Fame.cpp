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
  int nila;
  cin>>nila;
  string str;
  cin>>str;
  int res=0;
  for(auto i: str)
  {
    if(i=='R') res++;
  }
  if(res== 0 or res == nila)
  {
    cout<<-1<<endl;
    return;
  }

  for(int i=0;i<nila-1;i++)
  {
    if(str[i]=='L' and str[i+1]=='R')
    {
        cout<<i+1<<endl;
        return;
    }
    if(str[i]=='R' and str[i+1]=='L')
    {
        cout<<0<<endl;
        return;
    }
  }
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

/*
--------|
INPUT:  |
--------|
6
2
LL
2
LR
2
RL
2
RR
7
LLRLLLR
7
RRLRRRL


--------|
OUTPUT: |
--------|
-1
1
0
-1
3
6


*/