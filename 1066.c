/*1066 - Even, Odd, Positive and Negative*/

#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a%2==0)count1=count1+1;
    if(a%2!=0)count2=count2+1;
    if(a>0)count3=count3+1;
    if(a<0)count4=count4+1;

    if(b%2==0)count1=count1+1;
    if(b%2!=0)count2=count2+1;
    if(b>0)count3=count3+1;
    if(b<0)count4=count4+1;

    if(c%2==0)count1=count1+1;
    if(c%2!=0)count2=count2+1;
    if(c>0)count3=count3+1;
    if(c<0)count4=count4+1;

    if(d%2==0)count1=count1+1;
    if(d%2!=0)count2=count2+1;
    if(d>0)count3=count3+1;
    if(d<0)count4=count4+1;

    if(e%2==0)count1=count1+1;
    if(e%2!=0)count2=count2+1;
    if(e>0)count3=count3+1;
    if(e<0)count4=count4+1;

    printf("%d valor(es) par(es)\n",count1);
    printf("%d valor(es) impar(es)\n",count2);
    printf("%d valor(es) positivo(s)\n",count3);
    printf("%d valor(es) negativo(s)\n",count4);

    return 0;
}
