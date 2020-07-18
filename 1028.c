/*1028 - Collectable Cards*/

#include <stdio.h>
#include<math.h>

int main()
{
    int n,a,b,temp,s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);

        if(a<b){temp=a;a=b;b=temp;}
        while(a%b!=0)
        {
            s=a;
            a=b;
            b=s%a;
        }
        printf("%d\n",b);
    }

    return 0;
}
