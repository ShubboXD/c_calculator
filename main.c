#include <stdio.h>
#include<math.h>

double result(double a,char op,double b){
    if(op == '+'){
        return a + b;
    } else if (op == '-'){
        return a - b;
    } else if (op == '*'){
        return a * b;
    } else if (op == '/'){
        return a / b;
    }
    else {
        return NAN;
    }
}

int main() {
    double num1, num2;
    char operator;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter Operator(+,-,*,/): ");
    scanf(" %c", &operator);
    printf("Enter second operator: ");
    scanf("%lf", &num2);

    double ans = result(num1, operator, num2);

    if (isnan(ans)){
        printf("Invalid Operator\n");
    } 
    else {
        printf("Answer: %f\n", ans);
    }
    return 0;
}
