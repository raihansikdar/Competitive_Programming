#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%d",&a)
#define          Sc(a)           scanf("%s",&a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
 
 
int main() 
{
 
 vector<int>v;
 int n,k,c=0;
 scanf("%d %d",&n,&k);
 
 int i,m;
 for(i=0;i<n;i++)
 {
      cin>>m;
      v.push_back(m);
 }
 
  for(i=0;i<n;i++)
  {
    if(v[i]>=v[k-1] && v[i]>0)
         c++;
  }
 cout<<c;
 
 return 0;
 
 }
 
 /*

int main()
{
   ll n,k,arr[100],i,count=0;
   SS(n,k);
   f(n)
   {
       S(arr[i]);
   }
   f(n)
   {
        if(arr[i]>=arr[k-1] && arr[i]>0)
       {
           count++;
       }
   }
     p(count);
    return 0;
}
 

 */