/*2006	Identifying Tea*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,test[5],count=0;

    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        scanf("%d",&test[i]);

        if(test[i] == t)
            count++;
    }

    printf("%d\n",count);

    return 0;
}
