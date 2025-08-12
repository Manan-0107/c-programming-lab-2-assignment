#include<stdio.h>
int main(){
    int a,b;
    printf("enter the no 1 \n");
    scanf("%d",&a);
    printf("enter the no 2 \n");
    scanf("%d",&b);
    if (a>b){
        printf("the largest number between %d and %d is %d\n ",a,b,a);
        printf("the smallest number between %d and %d is %d ",a,b,b);

    }
    else{
        printf("the largest number between %d and %d is %d\n ",a,b,b);
        printf("the smallest number between %d and %d is %d ",a,b,a);

    }

}