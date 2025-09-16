/*count of litrate and illitrate men or women
programer : srushti makrubiya
updated date : 25 / 07 / 2025*/
#include<stdio.h>
void main()
{
    long int p=1441981744,m,w,tp,lm,lw,ilm,ilw;
    float pw=48.4,pm,op=85.95,im=80.95,iw=62.84;
    pm=100-48.4;
    m=(p*pm)/100;
    w=(p*pw)/100;
    tp=(p*op)/100;
    lm=(im*m)/100;
    lw=(iw*w)/100;
    ilm=m-lm;
    ilw=w-lw;
    printf("total population=%d",tp);
    printf("\ntotal population of men=%ld",m);
    printf("\ntotal population of women=%ld",w);
    printf("\nnum. of litrate men=%ld",lm);
    printf("\nnum. of litrate women=%ld",lw);
    printf("\nillitrate women=%ld",ilw);
    printf("\nillitrate men=%ld",ilm);
}
