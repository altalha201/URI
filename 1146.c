/*1146 - Growing Sequences*/

#include <stdio.h>

int main()
{
    int n,i;

    while(1)
    {
        scanf("%d",&n);

        if(n==0) break;
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i==n) printf("%d\n",i);
                else printf("%d ",i);
            }
        }
    }

    return 0;
}
