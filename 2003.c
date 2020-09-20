/*2003	Sunday Morning*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,m,r;

    while(scanf("%d:%d",&h,&m) != EOF)
    {
        if(h==7) r=m;
        else if(h==8) r=m+60;
        else if(h==9) r=120;
        else r=0;

        printf("Atraso maximo: %d\n",r);
    }

    return 0;
}
