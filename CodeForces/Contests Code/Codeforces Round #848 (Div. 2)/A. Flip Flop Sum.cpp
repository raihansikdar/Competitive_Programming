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
  ll nila;
  cin>>nila;
  ll arr[nila];
 ll sum =0;
 ll cnt=0;

  For(i,0,nila){
     cin>>arr[i];
     sum = sum+arr[i];
  }
  ll i=0;
  while(i<nila){
     if (arr[i]==-1){
          cnt=1;
          if (arr[i+1]==-1)
          {
               cnt=2;
               break;
          }
     }
     i++;
     
  }
  if(cnt==0){
     sum =sum-4;
  }
  else if (cnt ==2)
  {
       sum = sum+4;
  }
  cout<<sum<<endl;
}

int main()
{ 
	//freopen( "input.txt","r", stdin);
   // freopen( "my_output.txt","w", stdout);

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
5
-1 1 1 -1 -1
5
1 1 -1 -1 -1
2
1 1
4
1 -1 -1 1

--------|
OUTPUT: |
--------|
3
3
-2
4


*/