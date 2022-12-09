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
 
    
   ll n,i,c=1;
    S(n);
   ll arr[n];
  
 
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
 
    }
 
    for(i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
            c++;
    }
 
 
   cout<<c;
 
   
 
  return 0;
 }