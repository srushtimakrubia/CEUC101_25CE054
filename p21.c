#include<stdio.h>


void main()
{
    int a[25],i,pos_num=0,neg_num=0,odd_num=0,even_num=0;
    for(i=0;i<25;i++)
    {
        printf("enter the number %d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<25;i++)
    {
        if(a[i]>0)
        {
            pos_num++;
        }
        else
        {
            neg_num++;
        }

        if(a[i]%2==0)
        {
            even_num++;
        }
        else
        {
            odd_num++;
        }

        printf("\n");
    }
    printf("positive number=%d\n",pos_num);
    printf("negative number=%d\n",neg_num);
    printf("even number=%d\n",even_num);
    printf("odd number=%d\n",odd_num);
}
p21
