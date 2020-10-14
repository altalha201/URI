/*1962	A Long, Long Time Ago*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,a,t;

    scanf("%d",&n);

    while(n>=1)
    {
        scanf("%d",&t);

        if(t>=2015)
        {
            a = t - 2014;
            printf("%d A.C.\n",a);
        }
        else
        {
            a = 2015 - t;
            printf("%d D.C.\n",a);
        }

        n--;
    }
    return 0;
}
