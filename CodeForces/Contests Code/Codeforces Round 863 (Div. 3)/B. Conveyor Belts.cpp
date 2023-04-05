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

int solve(int ax,int by, int n){
  ax--;
  by--;
  ax = min(ax, n-ax-1);
  by = min(by, n-by-1);
  return min(ax,by);
}

int main()
{ 
	//freopen( "input.txt","r", stdin);
    //freopen( "my_output.txt","w", stdout);

    int test,n,ax1,by1,ax2,by2;
    cin>>test;
    while(test--){
      cin>>n>>ax1>>by1>>ax2>>by2;
      cout<<abs(solve(ax1,by1,n) - solve(ax2,by2,n))<<endl;
    }
    return 0;


}

/*
--------|
INPUT:  |
--------|
5
2 1 1 2 2
4 1 4 3 3
8 1 3 4 6
100 10 20 50 100
1000000000 123456789 987654321 998244353 500000004

--------|
OUTPUT: |
--------|
0
1
2
9
10590032

*/