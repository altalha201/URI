/*2172 - Event*/

#include <stdio.h>

int main()
{
    int x;
    long e,m;
    while(1)
    {
        scanf("%d %u",&x,&m);

        if(x==0 && m==0) break;
        if(x==1 || x==2 || x==3)
        {
            e=x*m;
            printf("%u\n",e);
        }
        else continue;
    }

    return 0;
}
