#include<stdio.h>
int main(){
    int net_salary,gross_salary,allowances,deduction;
    printf("enter the gross salary");
    scanf("%d",&gross_salary);
    printf("enter the allowances");
    scanf("%d",&allowances);
    printf("enter the deduction");
    scanf("%d",&deduction);
    if (gross_salary>10000){
        allowances=allowances*0.1;
        deduction=deduction*0.03;
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }
    else if(gross_salary>5000){
        allowances=allowances*0.07;
        deduction=deduction*0.02;
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }
    else{
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }
}