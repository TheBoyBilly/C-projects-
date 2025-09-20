#include <stdio.h>
#include <math.h>

int main(void){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("MINI CALCULATROR PROGRAM\n");

    printf("select first number: ");
    scanf("%lf", &num1);

    printf("select the operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("select second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
     case '*':
        result = num1 * num2;
        break;
     case '/':
        if (num2 == 0)
        {
            printf("Syntax error!\n");
        }
        else{
            result = num1 /num2;  
        }
        
        break;
    
    default:
        printf("Please enter a valid opertor(+ - * /)\n");
        break;
    }

    printf("Result: %.4lf", result);

    return 0;
}