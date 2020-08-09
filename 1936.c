#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,fact[10],n,x=0,k;

    fact[0]=1;
    for(i=1;i<10;i++)
        fact[i]=i*fact[i-1];

    scanf("%d",&n);

    for(i=1;i<10;i++)
    {
        if(fact[i]>n)
        {
            k = i-1;
            break;
        }
    }

    for(i=k;i>0;i--)
    {
        x+= n/fact[i];
        n= n%fact[i];
    }

    printf("%d\n",x);

    return 0;
}
