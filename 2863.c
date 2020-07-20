/*2863 - Umil Bolt*/

#include <stdio.h>

int main()
{
    int t;
    double n;
    while(scanf("%d",&t)!=EOF)
    {
        double less=12.00;
        for(int i=1;i<=t;i++)
            {
                scanf("%lf",&n);
                if(less>n) less=n;
            }
            printf("%.2lf\n",less);
    }
    return 0;
}
