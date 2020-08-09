#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n;

    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],count=n,temt;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    	for(int i=0;i<n;i++)
        {
            int g=a[i];
            for(int j=i+1;j<n;j++){
                if(g==a[j])
                {
                    count=count-1;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
