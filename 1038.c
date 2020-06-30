/*1038 - Snack*/

#include<stdio.h>

int main()
{
    int X,Y;
    float total;

    scanf("%d %d",&X,&Y);

    0<X<6;

    if(X==1)
    {
        total=Y*4.00;
        printf("Total: R$ %.2f\n",total);
    }
    else if(X==2)
    {
        total=Y*4.50;
        printf("Total: R$ %.2f\n",total);
    }
    else if(X==3)
    {
        total=Y*5.00;
        printf("Total: R$ %.2f\n",total);
    }
    else if(X==4)
    {
        total=Y*2.00;
        printf("Total: R$ %.2f\n",total);
    }
    else
    {
        total=Y*1.50;
        printf("Total: R$ %.2f\n",total);
    }

    return 0;
}
