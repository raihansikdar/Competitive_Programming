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
  ll nila;
  cin>>nila;
  ll arr[nila];
  unordered_map<ll,ll> mp;

  For(i,0,nila)
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }
  if(mp.size()==1)
  {
    cout<<"NO"<<endl;
    return;
  }
  if(nila==1){
    cout<<"YES"<<endl;
    return;
  }
  if (nila == 2 and arr[0] == arr[1]){
    cout<<"NO"<<endl;
    return;
  }
  
  sort(arr,arr+nila);
  reverse(arr,arr+nila);

  cout<<"YES"<<endl;
  if(arr[0]==arr[1]){
    swap(arr[1],arr[nila-1]);
  }
  for(auto i: arr){
    cout<<i<<" ";
  }
  cout<<endl;
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
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4


--------|
OUTPUT: |
--------|
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4


*/