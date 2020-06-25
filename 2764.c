/*2764 - Date Input and Output*/

#include <stdio.h>

int main() {
    int D,M,Y;

    scanf("%2d/%2d/%28d",&D,&M,&Y);

    printf("%02d/%02d/%02d\n",M,D,Y);
    printf("%02d/%02d/%02d\n",Y,M,D);
    printf("%02d-%02d-%02d\n",D,M,Y);

    return 0;
}

