/*1140 - Flowers Flourish from France*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sen[1500];

    while(1)
    {
        gets(sen);
        if(sen[0] == '*') break;
        else
        {
            int length,i,a=1;
            char c[2];
            length= strlen(sen);

            if(sen[0]>=65 && sen[0]<=90)
                c[0]=sen[0]+32;
            else if(sen[0]>=97 && sen[0]<=122)
                c[0]=sen[0]-32;
            for(i=1;i<length;i++)
            {
                if(sen[i]==' ')
                {
                    if(sen[i+1]==sen[0] || sen[i+1]==c[0])
                        continue;
                    else
                    {
                        a=0;
                        break;
                    }
                }
            }
            if(a==1)printf("Y\n");
            else printf("N\n");
        }
    }
}
