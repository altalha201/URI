#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j,k;
    char m[1002],m2[1002];

    scanf("%d",&n);
    getchar();

    while(n--)
    {
        gets(m);
        int l=strlen(m);
        for(i=0;i<l;i++)
        {
            if((m[i]>='A' &&m[i]<='Z') || (m[i]>='a' && m[i]<='z'))
                m[i]+=3;
        }
        int p=l-1;
        for(j=0;j<l;j++)
        {
            m2[j]=m[p];
            p--;
        }
        m2[l]='\0';
        for(j=l/2;j<l;j++)
            m2[j]-=1;
        printf("%s\n",m2);
    }

    return 0;
}
