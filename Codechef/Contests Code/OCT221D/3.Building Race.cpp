#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%f %f %f %f",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define		nn             "\n"

void solve()
{
      float chef,chefina,x,y;
      SSSS(chef,chefina,x,y);

      float chef_ans = chef/x;
      float chefina_ans = chefina/y;
      //cout<<chef_ans<<" "<<chefina_ans<<nn;

      if(chef_ans < chefina_ans) puts("Chef");
      else if (chef_ans > chefina_ans) puts("Chefina");
      else puts("Both");    
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