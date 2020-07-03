/*1078 - Multiplication Table*/

#include <stdio.h>

int main()
 {
     int i=1,N,p;

     scanf("%d",&N);

     2<N<1000;

     for(i=1;i<=10;i=i+1)
        {
            p=N*i;
            printf("%d x %d = %d\n",i,N,p);
        }

        return 0;
}
