/*1073 - Even Square*/

#include<stdio.h>

int main()
{
    int n,i,a;

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            a=i*i;

            printf("%d^2 = %d\n",i,a);
        }
    }


    return 0;
}

