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
#define     p(a)           printf("%d",a);
#define		nn             "\n"

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
   ll n;
   cin>>n;
   vector<ll> vec(n);
   For(i,0,n)
   {
      cin>>vec[i];
    }

  vector<ll> vec_v = vec;
  
  sort(vec.begin(), vec.end());

  ll max_num =vec[n-1];
  ll second_max_num = vec[n-2];
  
  For(i,0,n)
  {
      if(vec_v[i] == max_num)
      {
          cout<<max_num - second_max_num<<" ";
      }
      else
      {
          cout<<vec_v[i]-max_num<<" ";
      }
  }
  cout<<endl;

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
5
4
4 7 3 5
2
1 2
5
1 2 3 4 5
3
4 9 4
4
4 4 4 4

--------|
OUTPUT: |
--------|
-3 2 -4 -2 
-1 1 
-4 -3 -2 -1 1 
-5 5 -5 
0 0 0 0 

*/