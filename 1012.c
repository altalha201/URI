/*1012 - Area*/

#include <stdio.h>

int main() {
  double A,B,C;
   double TRIANGULO;
   double CIRCULO;
   double TRAPEZIO;
   double QUADRADO;
   double RETANGULO;
   double pi=3.14159;

   scanf("%lf %lf %lf",&A,&B,&C);

   TRIANGULO=((A*C)/2);
   printf("TRIANGULO: %.3lf\n",TRIANGULO);

   CIRCULO=pi*C*C;
   printf("CIRCULO: %.3lf\n",CIRCULO);

   TRAPEZIO=(((A+B)/2)*C);
   printf("TRAPEZIO: %.3lf\n",TRAPEZIO);

   QUADRADO=B*B;
   printf("QUADRADO: %.3lf\n",QUADRADO);

   RETANGULO=A*B;
   printf("RETANGULO: %.3lf\n",RETANGULO);

    return 0;
}

