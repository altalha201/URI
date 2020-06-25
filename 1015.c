/*1015 - Distance Between Two Points*/

#include <stdio.h>

int main() {
 double x1,y1;
    double x2,y2;
    double Distance;

    scanf("%lf %lf\n",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    Distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4lf\n",Distance);

    return 0;
}
