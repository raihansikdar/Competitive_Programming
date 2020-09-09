#include<bits/stdc++.h>
using namespace std;

#define		nn              "\n"
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%s %s",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)

int main()
{
   long long t,n,a[110][110],tp[110][110],i,j,Case=0;
 //   freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
    S(t);
    while(t--)
    {
   long long flag=0;
      char st[10];
        SS(st,st);
        S(n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                S(a[i][j]);
                if(a[i][j]<0)
                       flag=1;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j] != a[n-1-i][n-1-j])
                {
                          flag=1;
                    break;
                }
            }
        }



       if(flag)
       {
           printf("Test #%d: Non-symmetric.",++Case);
                        printf(nn);
        }
          else{
                  printf("Test #%d: Symmetric.",++Case);
                         printf(nn);
                }
    }
}

