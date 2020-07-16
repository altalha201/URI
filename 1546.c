/*1546 - Feedback*/

#include <stdio.h>

int main()
{
    int n,k,a;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);

        for(int j=0;j<k;j++)
        {
            scanf("%d",&a);

            if(a==1) printf("Rolien\n");
            else if(a==2) printf("Naej\n");
            else if(a==3) printf("Elehcim\n");
            else if(a==4) printf("Odranoel\n");
        }
    }

    return 0;
}
