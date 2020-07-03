/*1060 - Positive Numbers*/

#include <stdio.h>

int main() {
    double a,b,c,d,e,f;
    int count=0;

    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);

    a!=0;
    b!=0;
    c!=0;
    d!=0;
    e!=0;
    f!=0;

    if(a>0)count=count+1;
    if(b>0)count=count+1;
    if(c>0)count=count+1;
    if(d>0)count=count+1;
    if(e>0)count=count+1;
    if(f>0)count=count+1;

    printf("%d valores positivos\n",count);

    return 0;
}
