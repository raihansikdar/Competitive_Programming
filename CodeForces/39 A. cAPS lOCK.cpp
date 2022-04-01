#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%d %d",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%d %d%d",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%d\n",a)
 
 
int main() 
{
  
  int i,j=0;
 int c=0,d=0,e=0;
  char st[1001];
 
     Sc(st);
     int len=strlen(st);
 
    for(int i = 1; i < len; i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            c++;
            
        }
    }
 
   for(int i = 0; i < len; i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            d++;
        }
    }
 
 
    
    if(st[0]>='a' && st[0]<='z' && c==0 )
        {
           st[0]=st[0]-32;
            for(i=1;i<len;i++)
            {
                st[i]=towlower(st[i]);
                
 
            }
            cout<<st;
        }
 
    
    
 
 
        else if(d==len)
        {
                for(i=0;i<len;i++)
               {
                st[i]=towlower(st[i]);
 
                }
            cout<<st;           
        } 
 
        else 
        {
          cout<<st;
            
        }  
     
 
 }



 /*

int main()
{
    int c = 0,d = 0;
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++)
    {
        if(islower(s[i]))
        {
            c++;
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i]))
        {
            d++;
        }
    }
    if(islower(s[0]) && c==0)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
    if(d==s.size())
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else
    {
        cout<<s;
    }
}

 */