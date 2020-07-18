/*1174 - Array Selection I*/

#include <stdio.h>

int main()
{
    double x,a[100];

    for(int i=0;i<100;i++)
    {
        scanf("%lf",&x);
        if(x<=10)
        {
            printf("A[%d] = %.1lf\n",i,x);
        }
    }

    return 0;
}

