#include<bits/stdc++.h>
using namespace std;
#define    S(a)            scanf("%d",&a)
#define    SS(a,b)         scanf("%lf %lf",&a,&b)
#define    SSS(a,b,c)      scanf("%lf %lf %lf",&a,&b,&c)

int main()
{
    double x,y,r,t,a;
    S(t);
    while(t--){

        SSS(x,y,r);
        a=sqrt((x*x) + (y*y));
        printf("%.2lf %.2lf\n",r-a,r+a);


    }

}
