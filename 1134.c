/*1134 - Type of Fuel*/

#include <stdio.h>

int main()
{
    int a;
    int A=0,G=0,D=0;

    loop:

        scanf("%d",&a);

        if(a==1){A++;goto loop;}
        else if(a==2){G++;goto loop;}
        else if(a==3){D++;goto loop;}
        else if(a==4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",A);
            printf("Gasolina: %d\n",G);
            printf("Diesel: %d\n",D);
        }
        else goto loop;


    return 0;
}
