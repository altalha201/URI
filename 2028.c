/*2028	Sequence of Sequence*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,cases = 0;
    int i,j,k,count;

    while(scanf("%d",&n) != EOF)
    {
        cases++;
        count=1;
        for(i=1;i<=n;i++)
        {
            for(j=i;j>0;j--)
                count++;
        }
        if(n == 0)
            printf("Caso %d: %d numero\n",cases,count);
        else
            printf("Caso %d: %d numeros\n",cases,count);
        printf("0");
        for(i=1;i<=n;i++)
        {
            for(j=i;j>0;j--)
                printf(" %d",i);
        }
        printf("\n\n");
    }

    return 0;
}
