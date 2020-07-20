/*2862 - Insect!*/

#include <stdio.h>

int main()
{
    int c,n;

    scanf("%d",&c);

    for(int i=0;i<c;i++)
    {
        scanf("%d",&n);
        if(n<=8000) printf("Inseto!\n");
        else printf("Mais de 8000!\n");
    }

    return 0;
}
