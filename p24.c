#include<stdio.h>
void main()
{
    int i,count=0,diff,j;
    char n[50],c,n1[50],n2[50],ch;
    printf("\n enter 1. for count length :");
    printf("\n enter 2. for print reverse name :");
    printf("\n enter 3. for check same or different :");
    printf("\n enter 4. for copy the name :");
    printf("\n enter 5. for combine two name :");
    printf("\n enter 6. for convert  to upper case :");
    printf("\n enter 7. for convert  to lower case :");
    printf("\n enter 8. for first latter of name is capital:");
    printf("enter your choice : ");
    scanf("%c",&c);

    switch(c)
    {
        case '1':
            printf("enter name : ");
            scanf("%s",n);
            for(i=0;n[i]!='\0';i++)
            {
                count++;
            }
            printf("%d",count);
            printf("\n");
        break;

        case '2':

             printf("enter name : ");
            scanf("%s",n);
            for(i=0;n[i]!='\0';i++)
            {
                count++;
            }
            printf("%d",count);
            printf("\n");

            for(i=count-1;i>=0;i--)
            {
                printf("%c",n[i]);
            }
            break;

        case '3':
             printf("enter 1 name :");
            scanf("%s",n1);
            printf("enter 2 name :");
            scanf("%s",n2);
            for(i=0;n1[i]!='\0' || n2[i]!='\0';i++)
            {
                if(n1[i]!=n2[i])
                {
                    diff=n1[i]-n2[i];
                }
            }
                if(diff!=0)
                {
                    printf("both are diff");
                }
                else
                {
                    printf("both are same");
                }
                break;


        case '4':
             printf("enter the name : ");
             scanf("%s",n1);
                for(i=0;n1[i]!='\0' ;i++)
                {
                    n2[i]=n1[i];

                }
                 printf(" %s",n2);
                 break;

        case '5':
             printf("enter name 1: ");
            scanf("%s",n1);
            printf("enter name 2 :");
            scanf("%s",n2);
            for(i=0;n1[i]!='\0';i++)
            {
                n1[i];
            }
            for(j=0;n2[j]!='\0';i++,j++)
            {
                n1[i]=n2[j];
            }
            n1[i]='\0';
            printf("combination : %s",n1);
            break;

        case '6':
             printf("enter character :");
             scanf(" %c",&ch);
             if(ch>='a' && ch<='z')
             {
                 ch = ch - 32;
             }
             printf("%c",ch);
             break;

        case '7':
             printf("enter character :");
             scanf(" %c",&ch);
             if(ch>='A' && ch<='Z')
             {
                 ch = ch + 32;
             }
             printf("%c",ch);
             break;


        case '8':
             printf("enter name : ");
            scanf("%s",n);
            if(n[0]>='a' || n[0]<='z')
            {
                n[0]=n[0]-32;
            }
            printf("%s",n);
            break;

        default:
            printf("not vailid");
    }


}
