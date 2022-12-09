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
 
bool myfunc(int a,int b)
{
    return (a>b);
}
 
 
int main() 
{
	
  ll n,i,j;
  while(S(n)==1)
  {
 
  ll Max=0,Min=101,Max_index,Min_index;
 
  ll arr[1001];
 
  for(i=0;i<n;i++)
  {
    S(arr[i]);
    if(arr[i]>Max)
    {
        Max=arr[i];
        Max_index=i;
    }
    if(arr[i]<=Min)
    {
        Min=arr[i];
        Min_index=i;
    }
  }
 
  if(Max_index > Min_index)
  {
    Min_index++;
  }
 
  cout<<Max_index + (n-1) - Min_index;
  
cout<<endl;
  
}
 
 
  return 0;
 }