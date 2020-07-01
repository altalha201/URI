/*1079 - Weighted Averages*/

#include<stdio.h>

int main()
{
    int n,i;
    double a;
    double b;
    double c;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);

        double mid=(a*2+b*3+c*5)/10;

        printf("%.1lf\n",mid);
    }

    return 0;
}

