/*1164 - Perfect Number*/

#include <stdio.h>

int main()
{
    int n,x;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);

        int a=x/2;
        int d=0;
        for(int j=1;j<=a;j++)
        {
            if(x%j==0) d+=j;
        }

        if(d==x) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
    }

    return 0;
}

