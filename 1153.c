/*1153 - Simple Factorial*/

#include <stdio.h>

int main()
{
    int n,i;
    int f=1;

    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("%d\n",f);

    return 0;
}
