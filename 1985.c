/*1985 - MacPRONALTS*/

#include <stdio.h>

int main()
{
    int p,q,n;
    double d,total=0;

    scanf("%d",&p);

    for(int i=0;i<p;i++)
    {
        scanf("%d %d",&n,&q);

        if(n==1001)
        {
            d=1.50*q;
            total=total+d;
        }
        else if(n==1002)
        {
            d=2.50*q;
            total=total+d;
        }
        else if(n==1003)
        {
            d=3.50*q;
            total=total+d;
        }
        else if(n==1004)
        {
            d=4.50*q;
            total=total+d;
        }
        else if(n==1005)
        {
            d=5.50*q;
            total=total+d;
        }
    }
    printf("%.2lf\n",total);

    return 0;
}
