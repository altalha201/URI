/*1094 - Experiments*/

#include<stdio.h>

int main()
{
    int i,n,a,t;
    char h[2];
    int c=0;
    int r=0;
    int s=0;
    double pc,pr,ps;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %s",&a,&h);

        switch(h[0])
        {
        case 'C':
            c+=a;
            break;
        case 'R':
            r+=a;
            break;
        case 'S':
            s+=a;
            break;
        }
    }
    t=c+r+s;
    pc=(c*100.00)/t;
    pr=(r*100.00)/t;
    ps=(s*100.00)/t;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",pc);
    printf("Percentual de ratos: %.2lf %%\n",pr);
    printf("Percentual de sapos: %.2lf %%\n",ps);

    return 0;
}

