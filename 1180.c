/*1180 - Lowest Number and Position*/

#include <stdio.h>

int main()
{
    int n,i,p,min;

    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    min=x[0];

    for(i=1;i<n;i++)
    {
        if(min>x[i])
        {
            min=x[i];
            p=i;
        }
    }


    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",p);

    return 0;
}
