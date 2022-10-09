#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;

#define     S(a)           scanf("%lld",&a);
#define     SS(a,b)        scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c);
#define     SSSS(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
#define     p(a)           printf("%d\n",a);
#define     nn             "\n"

int vowel(char s)
{
    char v[5]={'a','e','i','o','u'};
    for (int i=0;i<5;i++)
    {
        if(s==v[i]) return 1;
    }
     return 0;
}

void ans()
{
    string s;
        cin>>s;
        bool ans = false;
        for(int i=0;i<s.size();i++)
        {
            if(vowel(s[i]))
            {
                if(vowel(s[i+1])&& vowel(s[i+2])) ans=true;
            }
        }
        if(ans)puts("Happy");
        else puts("Sad");
}

int main()
{ 
    freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    ll t;
    S(t);
    while(t--)
    {
        ans();
    }

    
    return 0;


}



