#include<bits/stdc++.h>
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


void solve()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }

      string s;
      cin>>s;

      map<int,char> mp;
      int temp = 0;
      for(int i=0;i<n;i++)
      {
        if(mp.find(arr[i]) != mp.end() && s[i] != mp[arr[i]])
        {
            temp = 1;
            break;
        }
        mp.insert({arr[i],s[i]});
      }

      if(!temp)
      {
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
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