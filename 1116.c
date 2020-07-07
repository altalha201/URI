/*1116 - Dividing X by Y*/

#include <stdio.h>

int main()
{
    int x,y;
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);

        if(x==0)printf("0.0\n");
        else if(y==0)printf("divisao impossivel\n");
        else
        {
            double def=(x*1.0)/y;
            printf("%.1lf\n",def);
        }
    }

    return 0;
}
