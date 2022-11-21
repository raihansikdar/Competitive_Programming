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
  int n;
  cin>>n;
  int a[2*n];
  for(int i=0;i<2*n;i++)
  {
    cin>>a[i];
  }
  map<int,int>mp;
  For(i,0,2*n)
  {
    mp[a[i]]++;
  }
  int flag =0;

  for(auto it:mp)
  {
    if(it.second >=3)
    {
        flag = 1;
        break;
    }
  }
  if(flag)
    cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
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
3
4 8 4 6 7 3
3
4 8 6 8 7 8
2
2 4 5 3
4
8 7 9 8 4 6 2 8

--------|
OUTPUT: |
--------|
Yes
No
Yes
No

*/