/*1008 - Salary*/

#include <stdio.h>

int main() {
  int en;
   int wh;
   double ah;
   double s;

   scanf("%d %d %lf",&en,&wh,&ah);

   s=wh*ah;
   printf("NUMBER = %d\n",en);
   printf("SALARY = U$ %.2lf\n",s);

    return 0;
}
