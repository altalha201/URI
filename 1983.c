/*1983	The Chosen*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, i, m = 0;
    double min = 8.0;

    scanf("%d",&n);

    double note[n];
    int reg[n];

    for(i=0;i<n;i++)
        scanf("%d %lf",&reg[i],&note[i]);

    for(i=0;i<n;i++)
    {
        if(note[i] >= min)
        {
            min = note[i];
            m = reg[i];
        }
    }

    if(m == 0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",m);

    return 0;
}
