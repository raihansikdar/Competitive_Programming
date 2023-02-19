//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<iterator>
#include<cmath>
#include<cstring>
#include<limits>
using namespace std;
typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     Sf(a)           scanf("%f",&a);
#define     SSf(a,b)        scanf("%f %f",&a,&b);
#define     SSSf(a,b,c)     scanf("%f %f %f",&a,&b,&c);
#define     SSSSf(a,b,c,d)     scanf("%f %f %f %f",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll  count=0;

    For(i,0,n){
      cin>>arr[i];
        if(arr[i]==2){
            count++; 
        } 
    }
        if(count&1)
        cout<<-1<<endl;
        else{
            ll curr_count=0;
            ll j=-1;

          For(i,0,n)
          {
            if(arr[i]==2) curr_count++;
            if(curr_count==count/2)
            {
                    j=i;
                    break;
                }
            }
            cout<<j+1<<endl;
        }
}

int main()
{ 
	//freopen( "input.txt","r", stdin);
   // freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
    	solve();
    }

    
    return 0;


}

/*
--------|
INPUT:  |
--------|
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1


--------|
OUTPUT: |
--------|
2
-1
1


*/