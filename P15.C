/* aim : making timer
programmer : srushti makrubiya
updated date : 22 / 08 / 2025*/
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("enter the value of n : ");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		clrscr();
		printf("timer : %d ",i);
		delay(1000);
	}
	getch();
}