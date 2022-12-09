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
 
  
  ll t,arr[10001],i,c=0,d=0,e=0;
  S(t);
 
    for(i=0;i<t;i++)
    {
        S(arr[i]);
    }
 
 
   ll max=arr[0];
   ll min=arr[0];
   
     for(i=0;i<t;i++)
    {
        if(arr[i]>max)
        {  
            max=arr[i];
            c++;
           
        }
        
 
       else if(arr[i]<min)
        {
            min=arr[i];
            d++;
            
        }
    }
 
  cout<<c+d;
 
return 0;
 
}