/*aim:marathon
editor:srushti makrubiya
date:15th aug,2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int t;
    float d;
    for(t=1,d=0.5;t<=20,d<=10;t++,d=d+0.5)
    {
        printf("\nminute %d:distance covered=%f km",t,d);
    }
}
