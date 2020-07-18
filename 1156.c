/*1156 - S Sequence II*/

#include <stdio.h>

int main()
{
    double a,S=1,b,c;

    for(a=2,b=3;b<=39;a*=2,b+=2)
    {
        c=b/a;
        S+=c;
    }
    printf("%.2lf\n",S);

    return 0;
}
