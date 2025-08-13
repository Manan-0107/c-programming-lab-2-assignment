#include<stdio.h>
int main(){
    int net_sales,gross_sales,discount;
    printf("enter the gross sales");
    scanf("%d",&net_sales);
    
    if (gross_sales>20000){
        discount=gross_sales*0.15;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }
    else if (gross_sales>10000){
        discount=gross_sales*0.1;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }
    else {
        discount=gross_sales*0.05;
        net_sales=gross_sales-discount;
        printf("the net salary is %d",net_sales);
    }

}
