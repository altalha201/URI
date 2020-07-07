/*1071 - Sum of Consecutive Odd Numbers I*/

#include <stdio.h>

int main()
{
    int x,y,a;
    int sum=0;

    scanf("%d %d",&x,&y);

       if(x>y)
       {
           if(y%2!=0)
           {
               for(a=y+2,sum=0;a<x;a+=2)
               {
                   sum=sum+a;
               }
           }
           else if(y%2==0)
           {
               for(a=y+1,sum=0;a<x;a+=2)
               {
                   sum=sum+a;
               }
           }
           printf("%d\n",sum);
       }
       else if(y>x)
       {
           if(x%2!=0)
           {
               for(a=x+2,sum=0;a<y;a+=2)
               {
                   sum=sum+a;
               }
           }
           else
           {
               for(a=x+1,sum=0;a<y;a+=2)
               {
                   sum=sum+a;
               }
           }
           printf("%d\n",sum);
        }
       else
       {
           sum=0;
           printf("%d\n",sum);
       }


    return 0;
}

