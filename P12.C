/*aim : determine the grade of a stdent according their marks
programer : srushti makrubiya
updated date : srushti makrubiya*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	char grade;
	clrscr();
	printf("enter marks=");
	scanf("\n%d",&m);
	grade = (m>=90)?printf("grade A"):(m>=80 && m<90)?printf("grade B"):(m>=70 && m<80)?printf("grade C"):(m>=60 && m<70)?printf("grade D"):printf("fail");
	getch();
}