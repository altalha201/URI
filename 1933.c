/*1933	Tri-du*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b;

    scanf("%d %d",&a,&b);

    if(a<b)
        a = b;

    printf("%d\n",a);

    return 0;
}
