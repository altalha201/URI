/*1018 - Banknotes*/

#include <stdio.h>

int main() {
 int b,c,d,e,f,g,h,i,j,k,l,m;
    long N;

    scanf("%zu",&N);
    0<N<1000000;

    b=N/100;
    c=N%100;
    d=c/50;
    e=c%50;
    f=e/20;
    g=e%20;
    h=g/10;
    i=g%10;
    j=i/5;
    k=i%5;
    l=k/2;
    m=k%2;

    printf("%zu\n",N);
    printf("%d nota(s) de R$ 100,00\n",b);
    printf("%d nota(s) de R$ 50,00\n",d);
    printf("%d nota(s) de R$ 20,00\n",f);
    printf("%d nota(s) de R$ 10,00\n",h);
    printf("%d nota(s) de R$ 5,00\n",j);
    printf("%d nota(s) de R$ 2,00\n",l);
    printf("%d nota(s) de R$ 1,00\n",m);;

    return 0;
}
