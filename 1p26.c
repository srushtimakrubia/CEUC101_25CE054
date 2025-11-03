#include<stdio.h>
#include<math.h>


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
            float s;
            s=(a+b+c)/2;
            printf("perimeter is :%f",s);
        }
void area( float a,float b,float c)
        {
            float s,v;
            v=sqrt(s(s-a)*(s-b)*(s-c));
            printf("area is :%f",v);
        }



void main()
{
    float a,b,c;
      printf("enter the three side of triangle : ");
    scanf("\n%f",&a);
    scanf("\n%f",&b);
    scanf("\n%f",&c);

    if(validity(a,b,c))
    {
        perameter(a,b,c);

    }

}

