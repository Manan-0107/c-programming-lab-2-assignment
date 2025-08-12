#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the no 1 \n");
    scanf("%d",&a);
    printf("enter the no 2 \n");
    scanf("%d",&b);
    printf("enter the no 3 \n");
    scanf("%d",&c);
    if (a>b && a>c && b<c){
        printf("the largest number between %d, %d  and %d is %d\n ",a,b,c,a);
        printf("the smallest number between %d,%d and %d is %d ",a,b,c,b);

    }
    else if (a>b && a>c && b>c){
        printf("the largest number between %d, %d  and %d is %d\n ",a,b,c,a);
        printf("the smallest number between %d,%d and %d is %d ",a,b,c,c);

    }
    
    else if(b>a && b>c && a>c){
        printf("th largest number between %d,%d and %d is %d\n ",a,b,c,b);
        printf("the smallest number between %d and %d is %d ",a,b,c,c);

    }
    else if (b>a && b>c && a<c){
        printf("the largest number between %d, %d  and %d is %d\n ",a,b,c,b);
        printf("the smallest number between %d,%d and %d is %d ",a,b,c,a);

    }
    else if (c>a && c>b && a>b){
        printf("the largest number between %d, %d  and %d is %d\n ",a,b,c,c);
        printf("the smallest number between %d,%d and %d is %d ",a,b,c,b);

    }
    else {
        printf("the largest number between %d, %d  and %d is %d\n ",a,b,c,c);
        printf("the smallest number between %d,%d and %d is %d ",a,b,c,a);

    }

}