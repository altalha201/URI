/*1072 - Interval 2*/

#include<stdio.h>

int main()
{
    int n,i,a;
    int in=0;
    int out=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(10<=a && a<=20)
        {
            in=in+1;
        }
        else
        {
            out=out+1;
        }
    }
     printf("%d in\n",in);
     printf("%d out\n",out);

    return 0;
}

