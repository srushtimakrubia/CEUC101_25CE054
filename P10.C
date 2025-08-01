/*aim:restaurant bill
date : 01/08/2025
programer : srushti makrubiya*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,fa,a;
	clrscr();
	fa=0;
	printf("1burger price = 150");
	printf("\n2pizza price = 200");
	printf("\n3pasta price = 120");
	printf("\n4sandwich price = 100");
	printf("\n5french fries price = 80");
	printf("when your order complet enter 6");
	x:scanf("%d",&m);
	switch(m)
	{
	case 1:
		fa = fa +150;
		break;
	case 2:
		fa = fa+200;
		break;
	case 3:
		fa = fa+120;
		break;

	case 4:
		fa = fa+100;
		break;
    case 5:
		fa = fa+80;
		break;
	case 6:
		goto y;
	default:
		printf("not available");
       }
       goto x;
       y:printf("fa = %d",fa);
       getch();

}