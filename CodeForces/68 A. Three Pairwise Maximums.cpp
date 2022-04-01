#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
 
using namespace std;
 
#define ll long long int
#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)
 
int main()
    {
    	ll t;
    	//freopen("input.txt","r",stdin);
    	cin>>t;
 
    	while(t--){
    		ll a[3];
    		cin>>a[0]>>a[1]>>a[2];
 
    		sort(a,a+3);
    		if(a[1]==a[2])
    		        cout<<"YES"<<endl<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
    		else
                cout<<"NO"<<endl;
    	}
 
    	return 0;
    }