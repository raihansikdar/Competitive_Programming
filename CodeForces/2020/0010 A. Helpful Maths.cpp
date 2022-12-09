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
 
 
   char st[101];
   char temp[101];
 
   scanf("%s",st);
 
   int len = strlen(st);
   int i,j,c=0;
 
   for(i=0;i<len-1;i++)
   {
    
    for(j=i+1;j<len;j++)
    {
       
        if(st[i]>st[j])
        {
            temp[i]  = st[i];
            st[i] =st[j];
            st[j] = temp[i];
        }
    }
   }
 
   for(i=0;i<len-1;i++)
   {
     if(st[i]=='+')
     {
        continue;
        
     }
     else
     {
        cout<<st[i]<<"+";
 
     }
   }
   cout<<st[len-1]; 
    
  return 0;
 
 }
 