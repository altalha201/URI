/*1158 - Sum of Consecutive Odd Numbers III*/

#include <stdio.h>

int main()
{
    int n,x,y,sum;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        sum=0;

        for(int j=1;j<=y;x++)
        {
            if(x%2!=0)
            {
                sum+=x;
                j++;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}

