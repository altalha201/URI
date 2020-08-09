#include <stdio.h>
#include<string.h>

int main()
{
    int n,d,b,l,k;

    while(1)
    {
        scanf("%d %d",&n,&d);
        if(n==0 && d==0)
            break;

        int a[d][n];
        for(int i=0;i<d;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        for(k=0; k<n; k++)
        {
            for(l=0,b=0; l<d; l++)
                b+=a[l][k];
            if(b==d)
            {
                printf("yes\n");
                break;
            }
            else b=0;
        }
        if(b==0) printf("no\n");
    }


    return 0;
}
