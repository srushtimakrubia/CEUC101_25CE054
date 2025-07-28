/*aim:find bmi
editor:srushti makrubiya
date:21/07/2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float h,w,bmi;
	clrscr();
	printf("enter height in meter");
	scanf("%f",&h);
	printf("enter weight in kilogram");
	scanf("%f",&w);
	bmi=w/(h*h);
	printf("bmi=%f",bmi);
	getch();
}