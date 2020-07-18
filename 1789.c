/*1789 - The Race of Slugs*/

#include <stdio.h>

int main()
{
    int l,v,max=0,i;

    while(scanf("%d",&l)!=EOF)
    {
        for(i=1,max=0;i<=l;i++)
        {
            scanf("%d",&v);
            if(v>max)
                max=v;
        }
        if(max<10) printf("1\n");
        else if(max>=10 && max<20) printf("2\n");
        else printf("3\n");
    }

    return 0;
}
