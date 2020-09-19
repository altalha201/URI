#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a,b,q,r;

    scanf("%d %d",&a,&b);

    if(a<0)
    {
        int e=b,g;
        if(b<0) e=b*(-1);
        for(r=0;r<e;r++)
        {
            g=a-r;
            if(g%b==0) break;
        }
        q=g/b;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);

    return 0;
}
