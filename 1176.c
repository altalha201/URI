/*1176 - Fibonacci Array*/

#include <stdio.h>

int main()
{
    int t,n,i;
    long long int N[61];
    N[0]=0;
    N[1]=1;
    for(i=2;i<61;i++)
    {
        N[i]=N[i-1]+N[i-2];
    }

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,N[n]);
    }

    return 0;
}
