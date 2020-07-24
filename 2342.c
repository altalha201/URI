/*2342 - Overflow*/

#include <stdio.h>

int main()
{
    int n,p,q,d;
    char operator;
    scanf("%d",&n);
    scanf("%d %c %d",&p,&operator,&q);
    switch(operator)
    {
    case '+':
        d=p+q;
        break;
    case '*':
        d=p*q;
        break;
    }
    if(d<=n) printf("OK\n");
    else printf("OVERFLOW\n");
    return 0;
}
