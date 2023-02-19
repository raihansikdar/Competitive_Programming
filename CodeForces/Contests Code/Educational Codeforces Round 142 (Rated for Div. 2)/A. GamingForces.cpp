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
  ll nila,ans=0;
  cin>>nila;
  vector<ll>vec(nila);
  For(i,0,nila)
  {
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());
  For(i,0,nila)
  {
    if (vec[i]==0)
    {
        continue;
    }
    if(i<nila && vec[i]==1){
        vec[i+1]--;

    }
     ans++;
  }
  cout<<ans<<endl;
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
3
4
1 2 1 2
3
2 4 2
5
1 2 3 4 5


--------|
OUTPUT: |
--------|
3
3
5


*/