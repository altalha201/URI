/*1865 - Mjölnir*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int c,n,i;
    char s[100];

    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        scanf("%s %d",s,&n);

        if(s[0]=='T' && s[1]=='h' && s[2]=='o' && s[3]=='r') printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
