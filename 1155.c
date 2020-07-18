/*1155 - S Sequence*/

#include <stdio.h>

int main()
{
    double a,S=0,b;

    for(a=1;a<=100;a++)
    {
        b=1/a;
        S=S+b;
    }
    printf("%.2lf\n",S);

    return 0;
}
