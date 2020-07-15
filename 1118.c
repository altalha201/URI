/*1118 - Several Scores with Validation*/

#include <stdio.h>

int main()
{
    double a;
    double d=0;
    double sum=0;
    double media;
    double option;

    while(1)
    {
        d=0;
        sum=0;

        while(1)
        {
            if(d==2)break;

            scanf("%lf",&a);

            if(a>=0 && a<=10)
            {
                sum=sum+a;
                d++;
            }
            else printf("nota invalida\n");
        }
        media=sum/2.0;

        printf("media = %.2lf\n",media);
        printf("novo calculo (1-sim 2-nao)\n");

        while(1)
        {
            scanf("%lf",&option);

            if(option!=1 && option!=2)
                printf("novo calculo (1-sim 2-nao)\n");
            else
                break;
        }
        if(option==2)
            break;

    }

    return 0;
}
