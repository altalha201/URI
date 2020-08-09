#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[10];

    for(int i=1;i<=3;i++)
    {
        int sum=0;
        while(1)
        {
            gets(a);
            if(a[0]=='c')
                break;

            if(a[0] == '-')
            {
                if(a[1] == '-')
                {
                    if(a[2] == '-') sum+=0;
                    else sum+=1;
                }
                else
                {
                    if(a[2] == '-') sum+=2;
                    else sum+=3;
                }
            }
            else if(a[0] == '*')
            {
                if(a[1] == '-')
                {
                    if(a[2] == '-') sum+=4;
                    else sum+=5;
                }
                else
                {
                    if(a[2] == '-') sum+=6;
                    else sum+=7;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
