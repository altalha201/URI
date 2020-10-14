/*2139 - Pedrinho's Christmas*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int m,d,a;

    while(scanf("%d %d",&m,&d) != EOF) {
        if(m == 12 && d > 25) {
            printf("Ja passou!\n");
        }
        else if(m == 12 && d == 25) {
            printf("E natal!\n");
        }
        else if(m == 12 && d == 24) {
            printf("E vespera de natal!\n");
        }
        else {
            a = 25-d;
            if(m == 1) a += 335;
            else if(m == 2) a += 304;
            else if(m == 3) a += 275;
            else if(m == 4) a += 244;
            else if(m == 5) a += 214;
            else if(m == 6) a += 183;
            else if(m == 7) a += 153;
            else if(m == 8) a += 122;
            else if(m == 9) a += 91;
            else if(m == 10) a += 61;
            else if(m == 11) a += 30;

            printf("Faltam %d dias para o natal!\n",a);
        }
    }
    return 0;
}
