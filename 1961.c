/*1961	Jumping Frog*/

#include<stdio.h>

int main(void)
{
    int p,n,i,l;
    int g=0;

    scanf("%d %d",&p,&n);

    int q[n],m=0-p;

    for(i=0;i<n;i++)
        scanf("%d",&q[i]);

    for(i=0;i<n-1;i++)
    {
        l= q[i+1]-q[i];
        if(l<=p && l>=m)
            continue;
        else
        {
            g=1;
            break;
        }
    }
    if(g==1)
        printf("GAME OVER\n");
    else
        printf("YOU WIN\n");

    return 0;
}
