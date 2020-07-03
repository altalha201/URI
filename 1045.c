/*1045 - Triangle Types*/

#include <stdio.h>

int main()
 {
    double A,B,C,temp;

    scanf("%lf %lf %lf",&A,&B,&C);

    if(A < B){temp = A;A = B; B = temp;}
	if(A < C){temp = A;A = C; C = temp;}
	if(A < B){temp = B;B = C; C = temp;}

	double a=A*A;
    double b=B*B;
    double c=C*C;

    if(A >= B+C) printf("NAO FORMA TRIANGULO\n");
    else
    {
    if(a == b+c) printf("TRIANGULO RETANGULO\n");

    if(a > b+c) printf("TRIANGULO OBTUSANGULO\n");

    if(a < b+c) printf("TRIANGULO ACUTANGULO\n");

    if(A==B && B==C) printf("TRIANGULO EQUILATERO\n");

    else if(A==B || B==C || C==A) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
