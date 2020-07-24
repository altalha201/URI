/*1973 - Star Trek*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    long long int n,i;
    scanf("%lld",&n);
    int a[n],b[n];
    int sum_a=0,sum_b=0;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=0;
    }
    i=0;
    while(1)
    {
        if(i==0 && a[i]%2==0)
        {
            b[i]=1;
            if(a[i]>0)
                a[i]--;
            break;
        }
        else if(i==n-1 && a[i]%2==1)
        {
            b[i]=1;
            if(a[i]>0)
                a[i]--;
            break;
        }
        else if(a[i]%2==1)
        {
            a[i]--;
            b[i]=1;
            i++;
        }
        else if(a[i]%2==0)
        {
            b[i]=1;
            if(a[i]>0)
                a[i]--;
            i--;
        }
    }
    for(i=0;i<n;i++)
    {
        sum_a += a[i];
        sum_b += b[i];
    }
    printf("%lld %lld\n",sum_b,sum_a);

    return 0;
}
