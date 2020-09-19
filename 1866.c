#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int c,n,i;

    scanf("%d",&c);
    while(c--)
    {
        int sum=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            if(i%2==0) sum--;
            else sum++;
        }
        printf("%d\n",sum);
    }


    return 0;
}
