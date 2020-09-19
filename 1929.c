#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[4],tmt;

    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[j]<a[i])
            {
                tmt=a[i];
                a[i]=a[j];
                a[j]=tmt;
            }
        }
    }
    int k=a[0]+a[1];
    int l=a[1]+a[2];

    if(a[2]<k || a[3]<l) printf("S\n");
    else printf("N\n");

    return 0;
}
