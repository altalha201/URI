#include <stdio.h>
#include<string.h>

int main()
{
    char t[2];
    double M[12][12],sum=0;
    int i,j,l,c=6,r=5;
    scanf("%d",&l);
    scanf("%s", t);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int z=7;z<=11;z++)
    {
        for(int x=r;x<=c;x++)
            sum+=M[z][x];
        c++;
        r--;
    }
    if(t[0]=='S') printf("%.1lf\n",sum);
    else if(t[0]=='M')
    {
        sum=sum/30.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
