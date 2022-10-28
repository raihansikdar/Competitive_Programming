#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

void solve()
{
    int n;
    cin >> n;
    int x[n];
    set<int> a;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a.find(x[i]) != a.end())
        {
            cout << "NO" << endl;
            return;3
        }
        a.insert(x[i]);
    }
    cout << "YES" << endl;
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