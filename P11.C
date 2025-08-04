/*aim : book additio
programer : srushti makrubiya
date : 04.08.2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	for(x=1;x<=50;x++)
	{
	printf("\tbook id : %d",x);
		if(x%5==0)
		{
			printf("\nspecial addition");
		}
	}
	getch();
}