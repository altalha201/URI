/*1149 - Summing Consecutive Integers*/

#include <stdio.h>

int main()
{
    int A,N,i,j;
    int sum=0;

    scanf("%d %d",&A,&N);
    while(N<=0)
        {
            scanf("%d",&N);
        }

    for(i=A,j=1;j<=N;i++,j++)
    {
        sum=sum+i;
    }

    printf("%d\n",sum);



    return 0;
}
