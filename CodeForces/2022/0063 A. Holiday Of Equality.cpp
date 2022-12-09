#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%lld %lld",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%lld %lld %lld",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%lld\n",a)
#define          pb              push_back
#define          pf              push_front
#define          nn              '\n'
 
 
 
int main() 
{
 
  
  ll n,c=0;
  S(n);
  ll arr[n];
  for(ll i=0;i<n;i++)
  {
    S(arr[i]);
  }
 
 sort(arr,arr+n);
 
 for(ll i=0;i<n;i++)
  {
    
     c+= arr[n-1] - arr[i];
      
  }
cout<<c;
 
 
return 0;
 
}