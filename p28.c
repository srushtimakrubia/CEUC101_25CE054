#include<stdio.h>
struct book
{
    int id;
    char bname[50];
    char aname[50];
    int price;
    char available;
};
int main()
{
    struct book b[75];
    int n;
    printf("enter the total no. of book=");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf(" id %d ",i+1);
        scanf("%d",&b[i].id);

        printf("enter book %d name =%s ",i+1,b[i].bname);
        scanf("%s",b[i].bname);

        printf("enter the book %d author name ",i+1);
        scanf("%s",b[i].aname);

        printf("enter book %d price ",i+1);
        scanf("%d",&b[i].price);

        printf("book %d available status  ",i+1);
        scanf(" %c",&b[i].available);

    }
    printf("\n-------------------------------------------------------------------------\n");
    printf("| %-5s | %-25s | %-10s | %-5s | %-10s |\n", "ID", "Book Name","AUTHOR NAME","PRICE","availability");
    printf("---------------------------------------------------------------------------\n");

    for(int i=0; i<n; i++)
    {
        printf("| %-5d | %-25s | %-10s | %-5d | -%10c |\n",b[i].id,b[i].bname,b[i].aname,b[i].price,b[i].available);
    }
    printf("---------------------------------------------------------------------------\n");

}
