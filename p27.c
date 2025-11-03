#include<stdio.h>
void saving(int n)
{
    int a=1,b=1,t,i;

    for(i=1;i<n+1;i++)
    {
        t=a+b;
        printf("\n month %d :%d",i+2,t);
        a=b;
        b=t;

    }


}
void main(int n)
{

    printf("enter the number of month :");
    scanf("%d",&n);
    saving(n);
}
