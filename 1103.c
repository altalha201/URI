#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int h1,m1,h2,m2,s,a;

    while(1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;

        if(h1>h2 || (h1==h2 && m2<m1))
            h2+=24;

        s=(h1*60)+m1;
        a=(h2*60)+m2;

        printf("%d\n",a-s);
    }

    return 0;
}
