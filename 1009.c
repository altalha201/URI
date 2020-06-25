/*1009 - Salary with Bonus*/

#include <stdio.h>

int main() {
char sfn[10];
    double ms;
    double tvs;
    double TS;

    scanf("%s",&sfn);
    scanf("%lf %lf",&ms,&tvs);

    TS=(ms+(tvs*0.15));
    printf("TOTAL = R$ %.2lf\n",TS);

    return 0;
}
