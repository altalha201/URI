/*1478 - Square Matrix II*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[100][100];
    int n,i,j,l;

    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;

        for(i=0;i<n;i++)
        {
            l=2;

            for(j=0;j<n;j++)
            {
                if(i < j)
                {
                    array[i][j]=l;
                    array[j][i]=l;
                    l++;
                }
                array[i][i]= 1;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j == 0)
                    printf("%3d",array[i][j]);
                else
                    printf(" %3d",array[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
