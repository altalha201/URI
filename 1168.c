#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,leds;
    char v[102];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%s", v);
        int l=strlen(v);
        leds = 0;

        for(int i=0;i<l;i++)
        {
            if(v[i] == '1') leds+=2;
            else if(v[i] == '2') leds+=5;
            else if(v[i] == '3') leds+=5;
            else if(v[i] == '4') leds+=4;
            else if(v[i] == '5') leds+=5;
            else if(v[i] == '6') leds+=6;
            else if(v[i] == '7') leds+=3;
            else if(v[i] == '8') leds+=7;
            else if(v[i] == '9') leds+=6;
            else if(v[i] == '0') leds+=6;
        }
        printf("%d leds\n",leds);
    }

    return 0;
}
