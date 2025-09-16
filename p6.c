/*celsius to fahrenheit
editor:srushti makrubiya
date:25th july*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("enter the value of c=");
	scanf("%f",&c);
	f=(c*9)/5+32;
	printf("%f",f);
	getch();
}
