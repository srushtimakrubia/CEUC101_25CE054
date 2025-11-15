#include<stdio.h>
#include<math.h>
float a,b,c,s;


 int validity(float a,float b,float c)
{

    if(a<=0 || b<=0 || c<=0)
    {
        printf("enter positive size ");
    }
    else if((a+b)>c && (a+c)>b && (c+b)>a)
    {
        printf("\n valid triangle ");
        return 1;
    }

    else
    {
        printf("\n invalid triangle");
        return 0;
    }

}
 void perameter( float a,float b,float c)
        {

            s=(a+b+c)/2;
            printf("\n perimeter is :%f",s);
        }
void area( float a,float b,float c,float s)
        {
            float v=0;
            v=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("\n area is : %f ",v);
        }
void classifly()
        {
            if(a==b && b==c && a==c)
            {
                printf("\n the triangle is Equilateral");
            }
            else if(a==b || b==c || a==c)
            {
                printf("\n the triangle is  Isosceles");
            }
            else if(a!=b || b!=c || c!=a)
            {
                printf("\n the triangle is Scalene");
            }
        }



void main()
{
    int n,i;
    char ch;
do
{


      printf(" \n enter the three side of triangle : \n ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(validity(a,b,c))
    {
        perameter(a,b,c);
        area(a,b,c,s);
        classifly();
    }

}

printf("you want to know other triangle detail(y/n) :  ");
scanf(" %c",&ch);
while(ch==y);

}


