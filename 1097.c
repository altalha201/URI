/*1097 - Sequence IJ 3*/

#include<stdio.h>

int main()
{
    int i,j,a=5,b=7;

    for(i=1;i<=9;i+=2)
    {
        for(j=b;j>=a;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        a=b;
        b=b+2;
    }

    return 0;
}
