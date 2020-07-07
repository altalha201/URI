/*1117 - Score Validation*/

#include <stdio.h>

int main()
{
    double a,media;
    double d=0;
    double sum=0;

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

    return 0;
}
