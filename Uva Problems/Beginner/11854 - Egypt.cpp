#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==0||b==0||c==0)
            break;
        if (a<=0 || b<=0 ||c<=0)
            puts("wrong");
       else if(a*a==b*b + c*c || b*b==a*a + c*c || c*c==a*a + b*b)
           puts("right");

        else puts("wrong");


}
}
