#include <stdio.h>
#include <math.h>

int main(void) {

     //COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double interestrate = 0.0;
    int compound = 0;
    int years = 0;
    double total = 0.0;

    printf("COMPOUND INTEREST CALCULATOR");

    printf("Enter the principal: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % : ");
    scanf("%lf", &interestrate);
    interestrate = interestrate / 100;

    printf("Enter the times compounded per year: ");
    scanf("%d", &compound);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    total = principal * pow(1 + interestrate / compound, compound * years);

    printf("After %d years, the total amount is %.2lf", years, total);
     
    return 0;
}