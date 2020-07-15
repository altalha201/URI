/*2766 - Input and Output Reading and Skipping Names*/

#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    char name[100];

    for(i=0;i<10;i++)
    {
        scanf("%s", name);

        if(i==2 || i==6 || i==8)printf("%s\n",name);
    }


    return 0;
}
