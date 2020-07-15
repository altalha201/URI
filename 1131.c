/*1131 - Grenais*/

#include <stdio.h>

int main()
{
    int a,b;
    int c=0,d=0,e=0;
    int i=0;
    int option;

    loop:

    scanf("%d %d",&a,&b);

    i++;

    if(a>b)c=c+1;
    else if(a<b)d=d+1;
    else e=e+1;

    printf("Novo grenal (1-sim 2-nao)\n");

    scanf("%d",&option);
    if(option==2)
    {
        printf("%d grenais\n",i);
        printf("Inter:%d\n",c);
        printf("Gremio:%d\n",d);
        printf("Empates:%d\n",e);

        if(c>d)printf("Inter venceu mais\n");
        else if(c<d)printf("Gremio venceu mais\n");
        else printf("Não houve vencedor\n");
    }
    else if(option==1)
    {
        goto loop;
    }


    return 0;
}
