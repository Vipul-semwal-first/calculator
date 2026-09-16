#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("enter an operator (+, -, *, /): \n"); 
    scanf("%c", &operator);
    printf("eneter two numbers: \n");
    scanf("%lf %lf", &a, &b);
    if(operator == '+'){
        printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
    }
    else if(operator == '-'){
        printf("%.2lf - %.2lf = %.2lf ", a, b, a - b);
    }
    else if(operator == '*'){
        printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
    }
    else if(operator == '/'){
        printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
    }
    else{
        printf("Error! operator is not correct");
    }
    return 0;
}