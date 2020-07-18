/*1165 - Prime Number*/

#include <stdio.h>

int main()
{
    int n,x,i,j,k=0,l;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);

        if(x==1 || x==2) printf("%d eh primo\n",x);
        else if(x>2)
        {
            for(j=2;j<x;j++)
            {
                if(x%j==0)
                {
                    k=2;
                    break;
                }
                else k=1;
            }
            if(k==2) printf("%d nao eh primo\n",x);
            else if(k==1) printf("%d eh primo\n",x);
        }
    }

    return 0;
}

