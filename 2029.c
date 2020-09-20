/*2029	Honey Reservoir*/

#include<stdio.h>
#include<stdlib.h>
#define P 3.14

int main()
{
    double v,d,r,area,height;

    while(scanf("%lf %lf",&v,&d) != EOF)
    {
        r = d/2.0;
        area = P*r*r;
        height = v/area;

        printf("ALTURA = %.2lf\nAREA = %.2lf\n",height,area);
    }

    return 0;
}
