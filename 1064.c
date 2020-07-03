/*1064 - Positives and Average*/

#include <stdio.h>

int main()
{
    double a,b,c,d,e,f;
    double sum=0;
    double ave;
    int count=0;

    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);

    a!=0;
    b!=0;
    c!=0;
    d!=0;
    e!=0;
    f!=0;

    if(a>0){count=count+1;sum=sum+a;}
    if(b>0){count=count+1;sum=sum+b;}
    if(c>0){count=count+1;sum=sum+c;}
    if(d>0){count=count+1;sum=sum+d;}
    if(e>0){count=count+1;sum=sum+e;}
    if(f>0){count=count+1;sum=sum+f;}

    printf("%d valores positivos\n",count);

    ave=sum/count;

    printf("%.1lf\n",ave);

    return 0;
}
