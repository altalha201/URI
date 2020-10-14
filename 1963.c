/*1963	The Motion Picture*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double a,b,p;

    scanf("%lf %lf",&a,&b);

    p = ((b-a)*100.00)/a;

    printf("%.2lf%%\n",p);

    return 0;
}
