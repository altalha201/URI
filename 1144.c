/*1144 - Logical Sequence*/

#include <stdio.h>

int main()
{
    int n;
    int a,b;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        a=i*i;
        b=i*i*i;

        printf("%d %d %d\n",i,a,b);
        printf("%d %d %d\n",i,a+1,b+1);
    }


    return 0;
}
