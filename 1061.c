/*1061 - Event Time*/

#include <stdio.h>

int main() {

    char f1[4],f2[4];
    int a1,b1,c1,d1,a2,b2,c2,d2;
    int a12,a22,b12,b22,c12,c22;
    int e,e1,e2,e3,e4;
    int x1,x2,x3,x4;

    scanf("%s%d",&f1,&a1);
    scanf("%d : %d : %d",&b1,&c1,&d1);
    scanf("%s%d",&f2,&a2);
    scanf("%d : %d : %d",&b2,&c2,&d2);

    a12=a1*24*60*60;
    b12=b1*60*60;
    c12=c1*60;
    e1=a12+b12+c12+d1;

    a22=a2*24*60*60;
    b22=b2*60*60;
    c22=c2*60;
    e2=a22+b22+c22+d2;

    e=e2-e1;

    x1=e/86400;
    e3=e%86400;
    x2=e3/3600;
    e4=e3%3600;
    x3=e4/60;
    x4=e4%60;

    printf("%d dia(s)\n",x1);
    printf("%d hora(s)\n",x2);
    printf("%d minuto(s)\n",x3);
    printf("%d segundo(s)\n",x4);

    return 0;
}
