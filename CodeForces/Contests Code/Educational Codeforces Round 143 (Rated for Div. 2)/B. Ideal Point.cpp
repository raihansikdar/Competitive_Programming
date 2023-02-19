#include<bits/stdc++.h>
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
    ll nila,kk,lll,rrr,last =0,first=0;
    SS(nila,kk);

    For(i,0,nila){
        SS(lll,rrr);
        if(lll==kk) {
            first++;
        }
        if(rrr==kk) {
            last++;
        }
    }
    if(first > 0 && last > 0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}


int main()
{
	//freopen( "input.txt","r", stdin);
    //freopen( "my_output.txt","w", stdout);

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
4
4 3
BRBB
RBR
4 7
BRBR
RRBRBRB
3 4
RBR
BRBR
5 4
BRBRR
BRBR


--------|
OUTPUT: |
--------|


*/
