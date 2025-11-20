#include<stdio.h>
int main(){
    int n,i,x,sum=0,tot;
    scanf("%d",&n);
    tot=n*(n+1)/2;
    for(i=0;i<n-1;i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d",tot-sum);
}

