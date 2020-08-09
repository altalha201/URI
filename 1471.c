#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,r,x,c,tmp;


    while(scanf("%d %d",&n,&r) != EOF)
    {
        int a[r];
        for(int i=0;i<r;i++)
            scanf("%d",&a[i]);

        if(n == r)
            printf("*\n");
        else
        {
            for (int i=0; i<r-1; i++)
            {
                for (int j=0; j<r-i-1; j++)
                {
                    if(a[j] > a[j+1])
                    {
                        tmp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = tmp;
                    }
                }
            }
            for(int i=1;i<=n;i++)
            {
                int l=0;
                for(int j=0;j<r;j++)
                {
                    if(i==a[j])
                    {
                        l=1;
                        break;
                    }
                }
                if(l == 0)
                    printf("%d ",i);
            }
            printf("\n");
        }
    }

    return 0;
}
