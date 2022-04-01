#include <stdio.h>
#include <iostream>
#include<string.h>
using namespace std;
 
#define          S(a)            scanf("%d",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%lld\n",a)
 
 
int main()
{
    int t;
   // freopen("codeforcesinput.txt","r",stdin);
    S(t);
    while(t--)
    {
        int len;
        char str[1000];
        Sc(str);
        len=strlen(str);
        if(len>10)
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
        else printf("%s\n",str);
    }
}