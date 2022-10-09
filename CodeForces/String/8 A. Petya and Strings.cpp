#include<bits/stdc++.h>
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
 
 
 char st[1000];
 char st2[1000];
 
 SSc(st,st2);
 
 strlwr(st);
 strlwr(st2);
 
 int d=0;
 d=strcmp(st,st2);
 
 cout<<d;
	
	
}


/* 

int main()
{
    char str[100],str2[100];
    SSc(str,str2);
    int len= strlen(str);
 
    for(int i=0; i<len; i++)
    {
        str[i] = towlower(str[i]);
        str2[i] = towlower(str2[i]);
    }
 
    int    x = strcmp(str,str2);
    
    if(x>0) printf("1\n");
    
    else if(x<0) printf("-1\n");
    
    else printf("0\n");
    return 0;
}
 


*/