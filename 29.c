#include<stdio.h>
int main(){
    int net_sales,gross_sales,discount;
    printf("enter the gross sales");
    scanf("%d",&net_sales);
    printf("enter the value of discount");
    scanf("%d",&discount);
    if (gross_sales>20000){
        discount=discount*0.15;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }
    else if (gross_sales>10000){
        discount=discount*0.1;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }
    else {
        discount=discount*0.05;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }
}