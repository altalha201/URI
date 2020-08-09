#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[102],b[102];
    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%s", a);
        scanf("%s", b);

        if(a[1] == 't' && b[1] == 't')
            printf("Aniquilacao mutua\n");
        else if(a[1] == 'e' && b[1] == 'e')
            printf("Sem ganhador\n");
        else if(a[1] == 'a' && b[1] == 'a')
            printf("Ambos venceram\n");
        else if(a[1] == 't' || (a[1]=='e'&&b[1]=='a'))
            printf("Jogador 1 venceu\n");
        else
            printf("Jogador 2 venceu\n");
    }

    return 0;
}
