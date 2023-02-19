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
       ll n,m,cnt_1 = 0,cnt_2 = 0;
        SS(n,m);

        string str_1,str_2;

        cin>>str_1>>str_2;

       For(i,0,n){
        if(str_1[i] == str_1[i-1]) {
            cnt_1++;
        }
       }
        
        For(i,0,m){
            if(str_2 [i] == str_2[i-1]){
                cnt_2++;
          }
        } 
       
        if((cnt_1 > 1 || cnt_2 > 1) || (cnt_1 == 1 && cnt_2 == 1)) {
            cout<<"NO"<<endl;
        }
        else if((cnt_2 == 1 || cnt_1 == 1) && str_1[n-1] == str_2[m-1]) {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
}

int main()
{ 
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

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