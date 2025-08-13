#include<stdio.h>
int main(){
    int net_salary,gross_salary,allowances,deduction;
    printf("enter the gross salary");
    scanf("%d",&gross_salary);
    
    if (gross_salary>10000){
        allowances=gross_salary*0.1;
        deduction=gross_salary*0.03;
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }
    else if(gross_salary>5000){
        allowances=gross_salary*0.07;
        deduction=gross_salary*0.02;
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }
    else{
        net_salary=gross_salary+allowances-deduction;
        printf("the net salary is %d",net_salary);
    }

}
