#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    float *p, *t, *q;
    printf("enter the value of n :");
    scanf("%d",&n);
    p=(float*)calloc(n,sizeof(float));
    t=p;
    for(i=0;i<n;i++,p++)
    {
        printf("item %d price is :",i+1);
        scanf("%f",p);

    }

    p=t;

    for(i=0;i<n;i++,p++)
    {
        p=t+i;
        for(j=i+1,q=p+1; j<n; j++,q++)
        {
            if(*p > *q)
            {
                *p=*p+*q;
                *q=*p-*q;
                *p=*p-*q;
            }
        }
    }

    p=t+i;
    for(i=0;i<n;i++,p++)
    {
        printf("%f\n",*p);
    }

}
