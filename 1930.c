#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[4],sum=0;

    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum-3);

    return 0;
}
