/*1089 - Musical Loop*/

#include <stdio.h>

int main()
{
    while(1)
    {
        int n,c=0;
        scanf("%d",&n);
        if(n==0) break;

        int i,m[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
        }
        for(i=1;i<n-1;i++)
        {
            if(m[i]>m[i-1] && m[i]>m[i+1] || m[i]<m[i-1] && m[i]<m[i+1]) c++;
        }
        if(m[0]>m[1] && m[0]>m[n-1] || m[0]<m[1] && m[0]<m[n-1]) c++;
        if(m[n-1]>m[n-2] && m[n-1]>m[0] || m[n-1]<m[n-2] && m[n-1]<m[0]) c++;

        printf("%d\n",c);
    }



    return 0;
}
