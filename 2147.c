/*2147 - Galopeira*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,n;
    double l,ans;
    char s[10000];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s", s);

        l=strlen(s);
        ans=l/100.0;

        printf("%.02lf\n",ans);
    }

    return 0;
}
