/*1011 - Sphere*/

#include <stdio.h>

int main() {
  double R;
    double pi=3.14159;
    double VOLUME;

    scanf("%lf",&R);

    VOLUME=(4.0/3)*pi*R*R*R;

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}
