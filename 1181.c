/*1181 - Line in Array*/

#include <stdio.h>
#include<string.h>

int main()
{
    char t[2];
    double M[12][12],sum=0;
    int i,j,l;
    scanf("%d",&l);
    scanf("%s", t);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&M[i][j]);
            if(i==l)
                sum+=M[i][j];
        }
    }
    if(t[0]=='S') printf("%.1lf\n",sum);
    else if(t[0]=='M')
    {
        sum=sum/12.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
