#include<iostream>
#include<stdio.h>
#include<string.h>
 
using namespace std;
#define          ll               long long int
#define          S(a)             scanf("%lld",&a)
#define          SS(a,b)          scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)         scanf("%s %s",&a,&b)
#define          p                printf
 
int main()
{
    ll t;
 
// freopen("input.txt","r",stdin);
    S(t);
    while(t--)
    {
        ll n;
        S(n);
 
             ll c= (n-1)/2;
             p("%lld\n",c);
        }
 
}
 