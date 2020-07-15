/*1150 - Exceeding Z*/

#include <stdio.h>

int main()
{
    int x,z,i,j=0;
    int sum=1;

    scanf("%d %d",&x,&z);
    while(x>=z)
        {
            scanf("%d",&z);
        }

    for(i=x;i<z;i++)
    {
        j+=i;
        if(j>z)break;
        sum++;
    }

    printf("%d\n",sum);



    return 0;
}
