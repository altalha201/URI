/*1914 - Whose Turn Is It?*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int q,n,m,l;
    int t=0;
    char a[] = "PAR";
    char p1[24],p2[24],o1[24],o2[25];

    scanf("%d", &q);
    while(q >= 1)
    {
        scanf("%s %s %s %s", p1, o1, p2, o2);
        scanf("%d %d", &n, &m);
        l = n+m;

        if(strcmp(o1,a) == 0)
            t = 1;
        else if(strcmp(o2,a) == 0)
            t = 2;

        if(l%2 == 0 && t == 1)
            printf("%s", p1);
        else if(l%2 == 0 && t == 2)
            printf("%s", p2);
        else if(l%2 != 0 && t == 1)
            printf("%s", p2);
        else if(l%2 != 0 && t == 2)
            printf("%s", p1);

        printf("\n");
        q--;
    }
}
