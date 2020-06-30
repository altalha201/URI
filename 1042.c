/*1042 - Simple Sort*/

#include <stdio.h>

int main() {
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d\n",c);
            printf("%d\n",b);
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",b);
            printf("%d\n",c);
            printf("%d\n",a);
        }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d\n",c);
            printf("%d\n",a);
            printf("%d\n",b);
        }
        else
        {
            printf("%d\n",a);
            printf("%d\n",c);
            printf("%d\n",b);
        }
    }
    else if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d\n",b);
            printf("%d\n",a);
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",a);
            printf("%d\n",b);
            printf("%d\n",c);
        }
    }

        printf("\n");
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);

    return 0;
}
