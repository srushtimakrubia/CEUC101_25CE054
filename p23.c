#include<stdio.h>
int main()
{
    int prices[100],n,i,profit,max=0,min=prices[0];
    printf("enter the no. of days you are buying and selling the products=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&prices[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(prices[i]<min)
            min=prices[i];
        else if(prices[i]-min>max)
            max=prices[i]-min;
    }
    printf("maximum profit you have earned in %d days=%d",n,max);

}

