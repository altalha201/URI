/*2753 - Output 7*/

#include <stdio.h>

int main()
{
    int a=97,i;
    char ch='a';

    for(i=a;i<=122;i++,ch++)
    {
        printf("%d e %c\n",i,ch);
    }

    return 0;
}
