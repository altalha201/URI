/*1043 - Triangle*/

#include <stdio.h>

int main() {
 float A,B,C;
    float P,T;

    scanf("%f %f %f",&A,&B,&C);

    if(A+B>C && B+C>A && C+A>B)
    {
        P=A+B+C;

        printf("Perimetro = %.1f\n",P);
    }
    else
    {
        T=((A+B)/2)*C;

        printf("Area = %.1f\n",T);
    }

    return 0;
}
