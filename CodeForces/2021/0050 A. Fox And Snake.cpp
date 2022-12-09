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

    ll r,c,i,j;
    SS(r,c);
 
    for(i=1;i<=r;i++)
    {
       
        
        if(i%2==0)
        {
            if(i%4==0)
            {
                cout<<"#";
              for(j=1;j<=c-1;j++)
            {
                 cout<<".";
            }
           }
 
            else
            {
                for(j=1;j<=c-1;j++)
            {
                 cout<<".";
            }
            cout<<"#";
            }
        
        }
       
 
      else
      {
        for(j=1;j<=c;j++)
        {
 
                 cout<<"#";
        }
      }      
         cout<<endl;     
        }  
 
  return 0;
 }