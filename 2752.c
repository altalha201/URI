/*2752 - Output 6*/

#include <stdio.h>
#include<string.h>

int main()
{
    char sen[50]="AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n",sen);
    printf("<%30s>\n",sen);
    printf("<%.20s>\n",sen);
    printf("<%-20s>\n",sen);
    printf("<%-30s>\n",sen);
    printf("<%.30s>\n",sen);
    printf("<%30.20s>\n",sen);
    printf("<%-30.20s>\n",sen);

    return 0;
}
