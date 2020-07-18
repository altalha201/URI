/*1541 - Building Houses*/

#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    while(scanf("%d",&a)!='0')
    {
        if(a==0) break;
        scanf("%d %d",&b,&c);

        float x=(a*b*100)/c;
        float y=sqrt(x);

        printf("%d\n",(int)y);

    }
    return 0;
}

