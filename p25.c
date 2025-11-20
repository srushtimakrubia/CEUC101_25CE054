#include<stdio.h>
void displaybooks()
{
    printf("===available books===\n");
    printf("book1\n");
    printf("book2\n");
    printf("book3\n");
    printf("book4\n");
    printf("book5\n");
}
int gettotalbooks()
{
    int books=5;
    return books;
}
void borrowbook(char bookname[50])
{
    printf("borrowed book=%s\n",bookname);
    printf("please return it eithin 7 days!!!\n");
}
int calculatefine(int dayslate,int chperday)
{
    int fine=dayslate*chperday;
    return fine;


}

void main()
{
    displaybooks();
    int total;
    total=gettotalbooks();
    printf("total books=%d\n",total);


    char name[50];
    printf("enter the name of the book=\n");
    gets(name);
    borrowbook(name);

    char choice;
    printf("are you late to submit(y/n)?=\n");
    scanf("%c",&choice);

    if(choice=='Y' || choice=='y')
    {
        int dayslate;
        int chperday=100;
        printf("enter the day you are late=\n");
        scanf(" %d",&dayslate);

        printf("charge per day=100 rupess...!!\n");
        int fine=calculatefine(dayslate,chperday);
        printf("you are %d days late so you have to pay %d charges for it.\n",dayslate,fine);

    }
    else
    {
        printf("*** good ! you have done great it ***\n");
    }


}


