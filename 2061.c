/*2061	Closing Tabs*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int n,m,i;
    char a[]="fechou";
    char b[]="clicou";
    char s[7];

    scanf("%d %d",&n,&m);
    getchar();

    for(i=0; i<m; i++)
    {
        gets(s);

        if(strcmp(s,a)==0)
            n+=1;
        else if(strcmp(s,b)==0)
            n-=1;
    }
    printf("%d\n",n);

    return 0;
}
