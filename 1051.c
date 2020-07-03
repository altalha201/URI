/*1051 - Taxes*/

#include <stdio.h>

int main() {
    double s,o,t,l;

    scanf("%lf",&s);

    if(0<=s && s<=2000)
    {
        printf("Isento\n");
    }
    else if(2000<s && s<=3000)
    {
        o=s-2000.00;
        t=(o*8.00)/100.00;

        printf("R$ %.2lf\n",t);
    }
    else if(3000<s && s<=4500)
    {
        o=s-2000.00;
        if(o<=1000)
        {
            t=(o*8.00)/100.00;
            printf("R$ %.2lf\n",t);
        }
        else if(o>1000)
        {
            l=o-1000;
            t=((l*18.00)/100.00)+80;
            printf("R$ %.2lf\n",t);
        }
    }
    else if(4500<s)
    {
        o=s-2000.00;
        l=o-2500.00;
        t=((l*28.00)/100.00)+80.00+270;
        printf("R$ %.2lf\n",t);
    }

    return 0;
}
