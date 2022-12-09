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

#define     For(i,x,y)        for( int i =int(x); i<int(y); i++)

int main()
{ 
	//freopen( "input.txt","r", stdin);
   // freopen( "my_output.txt","w", stdout);

    string st;
    cin>>st;

    int cnt = 1;

  For(i,0,st.size())
  {
    if(st[i]==st[i+1])
    {
        cnt++;
        if(cnt==7)
        {
            cout<<"YES"<<endl;
            return 0;
        } 
    }
    else
    {
        cnt = 1;
    }
  }

   cout<<"NO"<<endl;
    
    return 0;


}