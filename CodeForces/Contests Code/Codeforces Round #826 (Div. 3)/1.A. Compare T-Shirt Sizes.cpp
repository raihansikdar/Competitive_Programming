#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define     pp(a,b)           printf("%d %d\n",a,b);
#define		nn             "\n"

void solve()
{
    string a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<"="<<endl;
    }
    else
    {
        if(a[a.length()-1] == b[b.length()-1])
        {
            if(a[a.length()-1]=='S')
            {
                if(a.length() > b.length())
                    cout<<"<"<<endl;
                else 
                    cout<<">"<<endl;
            }

            else if(a[a.length()-1]=='L')
            {
                if(a.length() > b.length())
                    cout<<">"<<endl;
                else 
                    cout<<"<"<<endl;
            }
            else cout<<"="<<endl;
        }

        else
        {
            if(a[a.length()-1]=='S')
            {
                cout<<"<"<<endl;
            }
            else if(a[a.length()-1]=='M')
            {
                if(b[b.length()-1]=='S')
                    cout<<">"<<endl;
                else
                    cout<<"<"<<endl;
            }
            else cout<<">"<<endl;
        }


    }

}

int main()
{ 
//	freopen( "input.txt","r", stdin);
//    freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
    	solve();
    }

    
    return 0;


}