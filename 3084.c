/*3084 - Old Clock*/

#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0)c=0;
        if(b==0)d=0;
        c=(a*12)/360;
        d=(b*60)/360;

        printf("%02d:%02d\n",c,d);
    }

    return 0;
}
