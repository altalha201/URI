/*1175 - Array change I*/

#include <stdio.h>

int main()
{
    int x[20],i;

    for(i=19;i>=0;i--)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;
}
