#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
	
 
  ll n;
  char st[200001];
  int a=0,b=0,c=0,d=0,e=0;
  S(n);
  while(n--)
  {
    Sc(st);
 
    if(!strcmp(st,"Tetrahedron"))
  
         a++;
  
  else if(!strcmp(st,"Cube"))
  
         b++;
  
   else if(!strcmp(st,"Octahedron"))
   
        c++;
 
   else if(!strcmp(st,"Dodecahedron"))
 
         d++;
 
    else if(!strcmp(st,"Icosahedron"))
 
         e++;
  
  }
 
 
 int r = (a*4)+(b*6)+(c*8)+(d*12)+(e*20);
 
 cout<<r;
  
  
 
  return 0;
 
 }