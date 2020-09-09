#include<bits/stdc++.h>
using namespace std;

#define		nn              "\n"
#define 	S(a)            scanf("%d",&a)
#define 	SS(a,b)         scanf("%d %d",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)

int main()
{
    int a[200][200],i,j,n;
 //   freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    while(S(n)==1 && n)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                S(a[i][j]);
            }
        }
        int row_sum,col_sum,row,col,row_count=0,col_count=0;

        for(i=1; i<=n; i++)
        {
            row_sum=0;
            for(j=1; j<=n; j++)
            {
                row_sum =  row_sum+a[i][j];

            }
            //  printf("%d ",rsum);
            //printf(nn);
            if( row_sum%2!=0)
            {
                row=i;
                row_count++;
            }
        }

        for(j=1; j<=n; j++)
        {
            col_sum=0;
            for(i=1; i<=n; i++)
            {
                col_sum = col_sum+a[i][j];

            }
            // printf("%d ",csum);
            //printf(nn);

            if(col_sum%2!=0)
            {
                col=j;
                col_count++;
            }
        }
        if(row_count==0 && col_count==0)
            puts("OK");
        else if(row_count==1 && col_count==1)
            printf("Change bit (%d,%d)\n",row,col);
        else
            puts("Corrupt");

    }
}

