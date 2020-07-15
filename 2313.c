/*2313 - Which Triangle*/

#include <stdio.h>

int main()
{
    int A,B,C,temp;

    scanf("%d %d %d",&A,&B,&C);

    if(A < B){temp = A;A = B; B = temp;}
	if(A < C){temp = A;A = C; C = temp;}
	if(A < B){temp = B;B = C; C = temp;}

	int a=A*A;
    int b=B*B;
    int c=C*C;

    if(A >= B+C) printf("Invalido\n");
    else
    {
        if(A==B && B==C)printf("Valido-Equilatero\n");
        else if(A!=B && B!=C && C!=A)printf("Valido-Escaleno\n");
        else printf("Valido-Isoceles\n");

        if(a==b+c)printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }
    return 0;
}
