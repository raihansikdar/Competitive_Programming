#include<bits/stdc++.h>
using namespace std;
 
typedef     long long      ll;
typedef     vector<ll>     vll;
 
#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
 
//#define     for(i,x,y)       for(int i=int(x);i<int(y);i++)
 
#define		pb             push_back
#define		pob            pop_back
#define		nn             "\n"
 
 
int main()
{
	//freopen( "input.txt","r", stdin);
	//freopen( "output.txt","w", stdout);
 
  ll n,x;
  S(n);
 
  for(int i=0;i<n;i++)
  {
  	
  	S(x);
 
  	if(1900 <= x)
  		printf("Division 1\n");
 
  	else if(1600 <= x && x <=1899)
  		printf("Division 2\n");
 
  	else if(1400 <= x && x <=1599)
  		printf("Division 3\n");
 
  	else if(x <= 1399)
  		printf("Division 4\n");
 
  }
  
}