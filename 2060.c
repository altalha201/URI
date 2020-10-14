/*2060	Bino's Challenge*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int c_2=0,c_3=0;
    int c_4=0,c_5=0;
    int l[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&l[i]);

        if(l[i]%2==0)
            c_2++;
        if(l[i]%3==0)
            c_3++;
        if(l[i]%4==0)
            c_4++;
        if(l[i]%5==0)
            c_5++;
    }
    printf("%d Multiplo(s) de 2\n",c_2);
    printf("%d Multiplo(s) de 3\n",c_3);
    printf("%d Multiplo(s) de 4\n",c_4);
    printf("%d Multiplo(s) de 5\n",c_5);

    return 0;
}
Multiplo(s)
