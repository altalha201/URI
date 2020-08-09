#include <stdio.h>
#include<string.h>

int main()
{
    char t[2];
    double M[12][12],sum=0;
    int i,j,l,c=4,r=0;
    scanf("%d",&l);
    scanf("%s", t);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int z=1;z<=10;z++)
    {
        if(z>=6)
        {
            for(int x=0;x<=c;x++)
                sum+=M[z][x];
            c--;
        }
        else if(z<=5)
        {
            for(int x=0;x<=r;x++)
                sum+=M[z][x];
            r++;
        }
    }
    if(t[0]=='S') printf("%.1lf\n",sum);
    else if(t[0]=='M')
    {
        sum=sum/30.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
