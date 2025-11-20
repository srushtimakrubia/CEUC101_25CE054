#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=2;c<=r;c++)
        {
            printf(" ");
        }

        for(c=6-r;c>=1;c--)
            {
                printf("%d",c);
            }
         for(c=2;c<=6-r;c++)
            {
                printf("%d",c);
            }

            printf("\n");
    }
    for(r=1;r<=5;r++)
    {
        for(c=2;c<=6-r;c++)
        {
            printf(" ");
        }
        for(c=r;c>=1;c--)
        {
            printf("%d",c);
        }
        for(c=2;c<=r;c++)
        {
            printf("%d",c);
        }

            printf("\n");
    }


}

