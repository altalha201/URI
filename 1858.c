/*1858 - Theon's Answer*/

#include <stdio.h>

int main()
{
    int n,x,min,count=1;

    scanf("%d",&n);
    scanf("%d",&x);
    min=x;

    for(int i=1;i<n;i++)
    {
        scanf("%d",&x);

        if(min>x)
        {
            min=x;
            count=i+1;
        }
    }

    printf("%d\n",count);

    return 0;

}
