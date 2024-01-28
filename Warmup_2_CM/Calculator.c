#include <stdio.h>

int main(){

double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("SUM of %lf and %lf is %lf",num1, num2, num1+num2);
    printf("DIFFERENCE of %lf and %lf is %lf", num1, num2, num1-num2);
    printf("PRODUCT of %lf and %lf is %lf", num1, num2, num1*num2);
    printf("QUOTIENT of %lf and %lf is %lf", num1, num2, num1/num2);



}