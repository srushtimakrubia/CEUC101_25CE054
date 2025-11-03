#include<stdio.h>
#include<math.h>
    float a,b,c,s;


 int validity(float a,float b,float c)
{

    if((a+b)>c && (a+c)>b && (c+b)>a)
    {
        printf("valid triangle ");
        return 1;
    }

    else
    {
        printf("invalid triangle");
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



void main()
{

      printf("enter the three side of triangle : ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(validity(a,b,c))
    {
        perameter(a,b,c);
        area(a,b,c,s);

    }

}


