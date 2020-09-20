/*2059	Odd, Even or Cheating*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int p,j1,j2,r,a;
    int l,result;

    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

    l=j1+j2;

    if(r == 0 && a == 0)
    {
        if((p == 1 && l%2 == 0) ||(p == 0 && l%2 != 0))
            result = 1;
        else
            result = 2;
    }
    else if(r ==0 && a == 1)
        result = 1;
    else if(r == 1 && a == 0)
        result = 1;
    else if(r == 1 && a == 1)
        result = 2;

    printf("Jogador %d ganha!\n",result);

    return 0;
}
