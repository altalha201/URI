/*1040 - Average 3*/

#include <stdio.h>

int main() {

    float N1,N2,N3,N4;
    float a;
    float b;
    float c;

    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    a=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1f\n",a);
    if(7.0<=a)
    {
        printf("Aluno aprovado.\n");
    }
    if(a<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(a>=5.0 && a<=6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%f",&b);
        printf("Nota do exame: %.1f\n",b);
        c=(a+b)/2;
        if(c<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        if(c>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        printf("Media final: %.1f\n",c);
    }

    return 0;
}
