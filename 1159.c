/*1159 - Sum of Consecutive Even Numbers*/

#include <stdio.h>

int main()
{
    int x;

    while(1)
    {
        scanf("%d",&x);

        if(x==0) break;
        else
        {
            int sum=0;

            for(int j=1;j<=5;x++)
            {
                if(x%2==0)
                    {
                        sum+=x;
                        j++;
                    }
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}

