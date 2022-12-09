#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include <unistd.h>
using namespace std;
 
#define          ll                 long long int
#define          S(a)            scanf("%lld",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)
 
 
int main()
{
    ll t,n,i;
   //freopen("input.txt","r",stdin);
    S(t);
    read:
    while(t--)
     {
        S(n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            S(arr[i]);
        }
        sort(arr,arr+n) ;
        for(i=1; i<=n; i++)
        {
            if(arr[i] - arr[i-1]>1)
            {
                 puts("NO");
                 goto read;
            }
 
        }
 
        puts("YES");
 
    }

}
 