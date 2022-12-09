#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%d",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
 
   int n,count=0;
   S(n);
   char st[101];
   while(n--)
   {
        Sc(st);
    }
      int len=strlen(st);
 
        for(int i=0;i<len-1;i++)
        {
           
            if(st[i]==st[i+1])
            {
                    count++;
            }
          
               
        }
   
 
   cout<<count;
   
   
    
  return 0;
 
 }
 