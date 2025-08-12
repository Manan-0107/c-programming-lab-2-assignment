#include<stdio.h>
int main(){
    int a,b,c ;
    float d;
    printf("enter the marks1 between 1 to 100");
    scanf("%d",&a);
    printf("enter the marks2 between 1 to 100");
    scanf("%d",&b);
    printf("enter the marks3 between 1 to 100");
    scanf("%d",&c);
    d=(a+b+c)/3;
    if (d>=70){
        printf("distinction");
    }
    else if(d>=60){
        printf("first");
    }
    else if (d>=50){
        printf("second");
    }
    else if (d>=35){
        printf("third class");
    }
    else{
        printf("fail");
    }

}
