/*2760 - String Input and Output*/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101],c[101];
    int i;

    scanf("%[^\n]%*c \n%[^\n]%*c \n%[^\n]%*c",a,b,c);

    printf("%s%s%s\n",a,b,c);
    printf("%s%s%s\n",b,c,a);
    printf("%s%s%s\n",c,a,b);

    i=0;
    while(a[i] != '\0' && i<10 )
    {
        printf("%c",a[i]);
        i++;
    }
    i=0;
    while(b[i] != '\0' && i<10 )
    {
        printf("%c",b[i]);
        i++;
    }
    i=0;
    while(c[i] != '\0' && i<10 )
    {
        printf("%c",c[i]);
        i++;
    }
    printf("\n");

    return 0;
}
