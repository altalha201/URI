/*1010 - Simple Calculate*/

#include <stdio.h>

int main() {
    int pc1,nu1;
    int pc2,nu2;
    float pu1;
    float pu2;
    float Total;

    scanf("%d%d%f\n",&pc1,&nu1,&pu1);
    scanf("%d%d%f",&pc2,&nu2,&pu2);

    Total=((nu1*pu1)+(nu2*pu2));

    printf("VALOR A PAGAR: R$ %.2f\n",Total);

    return 0;
}
