#include<stdio.h>
void main()
{
    int i,j,n,row,seat;
    char s[50][50];
    for(i=0;i<5;i++)
    {
            for(j=0;j<10;j++)
            {
                s[i][j]='0';
            }
    }
    printf("enter no. of resvered =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter row and col for seats= ",i+1);
        scanf("%d %d",&row,&seat);
        if(row>=1 && row<=5 && seat>=1 && seat<=10)
        {
            s[row-1][seat-1]='*';
        }
        else
        {
            printf("invalid input!!!\n");
            i--;
        }
    }
    for(i=0;i<5;i++)
    {
            for(j=0;j<10;j++)
            {
                printf("%c",s[i][j]);
            }
            printf("\n");
    }




}
p22
