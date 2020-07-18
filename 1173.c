/*1173 - Array fill I*/

#include <stdio.h>

int main()
{
    int v,n[10],i,a;

    scanf("%d",&v);

    printf("N[0] = %d\n",v);

    a=v;
    for(i=1;i<10;i++)
    {
        a=a*2;
        printf("N[%d] = %d\n",i,a);
    }

    return 0;
}

