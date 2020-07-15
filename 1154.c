/*1154 - Ages*/

#include <stdio.h>

int main()
{
    int a,b=0,c=0;
    while(1)
    {
        scanf("%d",&a);

        if(a<=0) break;
        else
        {
            b=b+a;
            c++;
        }
    }
    double d=(b*1.00)/c;
    printf("%.2lf\n",d);



    return 0;
}
