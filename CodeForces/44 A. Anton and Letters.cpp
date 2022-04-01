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
 
 
    char st[10001];
    int c=0;
 
     gets(st);
     int len =strlen(st);
 
     sort(st,st+len);
    
 
    for(int i=0;i<len-1;i++)
    {
        if(st[i]=='{' || st[i]=='}' || st[i]== ','||st[i]==' ')
        {
            continue;
        }
        
         if(st[i]>='a' && st[i]<='z')
         {
               c++; 
           if(st[i]==st[i+1])
                 c--;
         }
            
    }
   cout<<c;
 
  return 0;
 }