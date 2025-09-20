#include<stdio.h>
void main()
{
    int a[25],posnum=0,negnum=0,oddnum=0,evennum=0,i;

    for(int i=0;i<25;i++)
    {
        printf("enter the value of num %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<25;i++)
    {
        if(a[i]>0)
        {
            posnum++;
        }
        else{
            negnum++;
        }
        if(a[i]%2==0)
        {
            evennum++;
        }
        else
        {
            oddnum++;
        }
    }
    printf("\nposnum %d :",posnum);
    printf("\n negnum %d : ",negnum);
    printf("\n evennum %d : ",evennum);
    printf("\n oddnum %d : ",oddnum);


}

