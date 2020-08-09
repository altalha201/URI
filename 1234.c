#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int l,i,j;
    char sen[100];

    while(gets(sen)!= NULL)
    {
        j = 0;
        l = strlen(sen);
        for(i=0;i<l;i++)
        {
            if(sen[i] != ' ')
            {
                j++;
                if(sen[i]>96 && j%2==1) sen[i] -= 32;
                else if(sen[i]<96 && j%2==0) sen[i] += 32;
            }
        }
        sen[l] = '\0';
        printf("%s\n",sen);
    }

    return 0;
}
