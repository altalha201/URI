/*1046 - Game Time*/

#include <stdio.h>

int main() {
    int S,E,G,C;

    scanf("%d %d",&S,&E);

    if(E<S)
    {
        C=24-S;
        G=C+E;

        printf("O JOGO DUROU %d HORA(S)\n",G);
    }
    else if(E==S)
    {
        G=24;
        printf("O JOGO DUROU %d HORA(S)\n",G);
    }
    else
    {
        G=E-S;
        printf("O JOGO DUROU %d HORA(S)\n",G);
    }

    return 0;
}
