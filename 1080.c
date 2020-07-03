/*1080 - Highest and Position*/

#include<stdio.h>

int main()
{
    int a,i,p;
    int max=-1;

    for(i=1;i<101;++i)
    {
        scanf("%d",&a);

        if(max < a)
        {
            max = a,p=i;
        }
    }

    printf("%d\n",max);
    printf("%d\n",p);

    return 0;
}

