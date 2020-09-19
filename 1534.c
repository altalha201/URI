/*1534	Array 123*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[70][70];
    int n,i,j,l;

    while(scanf("%d",&n) != EOF)
    {
        l = n-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                array[i][j] = 3;
                if(j == l)
                    array[i][j] = 2;
                else if(i == j)
                    array[i][j] = 1;
            }
            l--;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d",array[i][j]);
            printf("\n");
        }
    }
    return 0;
}
