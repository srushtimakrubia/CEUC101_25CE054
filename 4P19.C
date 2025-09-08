#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,R,R1,x,y;
	clrscr();
	printf("enter the value of R : ");
	scanf("%d",R);
	R1=(R/2)+1;
     for(i=1;i<=R1;i++)
    {
	for(j=1;j<=R1-i;j++)
	{
		printf("0");
	}
	x=65;
	for(j=R1-i+1;j<=R1;j++)
	{
		printf("%c",x);
		x++;
	}
	y=64+i-1;
	for(j=1;j<=i-1;j++)
	{
		printf("%c",y);
		y--;
	}
	printf("\n");
    }
    getch();
}