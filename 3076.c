/*3076 - History Exercise*/

#include <stdio.h>
#include<math.h>

int main()
{
    int a,c;

    while(scanf("%d",&a)!=EOF)
    {
        if(a%100==0) c=a/100;
        else c=(a/100)+1;


        printf("%d\n",c);
    }

    return 0;
}
