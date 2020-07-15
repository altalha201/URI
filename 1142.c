/*1142 - PUM*/

#include <stdio.h>

int main()
{
    int n;
    int a=1,b=2,c=3;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d PUM\n",a,b,c);

        a=a+4;
        b=b+4;
        c=c+4;
    }


    return 0;
}
