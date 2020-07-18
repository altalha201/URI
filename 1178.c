/*1178 - Array Fill III*/

#include <stdio.h>

int main()
{
    int n[100],i;
    double t;

    scanf("%lf",&t);

    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,t);
        t=t/2;
    }

    return 0;
}
