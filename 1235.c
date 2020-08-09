#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int l,i,j,n;
    char a[102],b[102];

    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(a);
        l = strlen(a);
        int h=l/2,k=0;
        for(j=h-1;j>=0;j--)
        {
            b[k]=a[j];
            k++;
        }
        k=h;
        for(j=l-1;j>=h;j--)
        {
            b[k]=a[j];
            k++;
        }
        b[l]= '\0';
        puts(b);
    }

    return 0;
}
