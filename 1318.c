/*1318 - Fake Tickets*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,m,i,g,t[10001],count;

    while(scanf("%d %d",&n,&m) && n!=0 && m!=0)
    {
        for(i=1;i<=n;i++)
        {
            t[i]=0;
        }

        for(i=0;i<m;i++)
        {
            scanf("%d",&g);
            t[g]++;
        }
        count =0;
        for(i=1;i<=n;i++)
        {
            if(t[i]>1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
