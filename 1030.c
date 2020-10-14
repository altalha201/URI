/*1030	Flavious Josephus Legend*/

#include <stdio.h>
#include<stdlib.h>

int jloop(int ,int ,int);
int jpluse(int ,int);

int main()
{
    int nc,n,k,m,i=1;

    scanf("%d",&nc);
    while(i<=nc)
    {
        scanf("%d %d",&n,&k);

        m= jpluse(n,k);
        printf("Case %d: %d\n",i,m);
        i++;
    }
    return 0;
}

int jpluse(int n,int k)
{
    return jloop(n,k,1);
}
int jloop(int n,int k,int sp)
{
    if(n==1)
        return 1;
    int nsp, s;
    nsp = (sp + k - 2)% n+1;
    s = jloop(n-1, k, nsp);

    if(s<nsp)
        return s;
    else
        return s+1;

}
