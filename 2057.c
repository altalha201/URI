/*2057	Time Zone*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s,t,f;
    int r,result;

    scanf("%d %d %d",&s,&t,&f);

    r = s+t+f;

    if(r == 24)
        result = 0;
    else if(r > 24)
        result = r - 24;
    else if(r < 0)
        result = r + 24;
    else
        result = r;

    printf("%d\n",result);

    return 0;
}
