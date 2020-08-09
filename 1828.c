#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[30],b[30];
    int n,l,k;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%s %s", a, b);

        if(a[2] == b[2])
            printf("Caso #%d: De novo!\n",i);
        else if(a[2]=='s' && b[2]=='p')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='p' && b[2]=='s')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='p' && b[2]=='d')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='d' && b[2]=='p')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='d' && b[2]=='g')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='g' && b[2]=='d')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='g' && b[2]=='o')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='o' && b[2]=='g')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='o' && b[2]=='s')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='s' && b[2]=='o')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='s' && b[2]=='g')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='g' && b[2]=='s')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='g' && b[2]=='p')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='p' && b[2]=='g')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='p' && b[2]=='o')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='o' && b[2]=='p')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='o' && b[2]=='d')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='d' && b[2]=='o')
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(a[2]=='d' && b[2]=='s')
            printf("Caso #%d: Bazinga!\n",i);
        else if(a[2]=='s' && b[2]=='d')
            printf("Caso #%d: Raj trapaceou!\n",i);
    }

    return 0;
}
