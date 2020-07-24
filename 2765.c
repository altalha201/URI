/*2765 - Coming Input and Output*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,l;
    char s[1000];

    scanf("%[^\n]%*c", s);

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i] == ',') printf("\n");
        else printf("%c",s[i]);
    }
    printf("\n");

    return 0;
}
