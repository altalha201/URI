/*1864 - Our Days Are Never Coming Back*/

#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    char sen[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%c",sen[i]);
    }
    printf("\n");

    return 0;
}

