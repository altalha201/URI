#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[30],b[30];
    int n,l,k;

    while(scanf("%s",a)!= EOF)
    {
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&l);
            printf("%c",a[l-1]);
        }
        printf("\n");
    }

    return 0;
}
