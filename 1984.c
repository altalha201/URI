#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char c[11];

    scanf("%s",c);

    int l=strlen(c);

    for(int i=l-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    c[l]='\0';
    printf("\n");
    return 0;
}
