/*1026 - To Carry or not to Carry*/

#include <stdio.h>
#include<math.h>

int main()
{
    int unsigned long a,b,c;

    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        c=a^b;
        printf("%lu\n",c);
    }
    return 0;
}
