#include<bits/stdc++.h>
#include<vector>
#include<utility>
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
 
 
 
int main() 
{
   
   ll arr[4];
   for(ll i =0;i<4;i++)
   {
    S(arr[i]);
   }
 
   sort(arr,arr+4);
 
   ll c = arr[3]-arr[0];    cout<<c<<" ";
   ll b = arr[2]-c;         cout<<b<<" ";
   ll a = arr[3]-(b+c);     cout<<a<<endl;

  return 0;
 }
 