#include <stdio.h>
#include <math.h>


int main(void) {


    int choice = 0;
    float kilogram = 0.0f;
    float pound = 0.0f;

    printf("WEIGHT CONVERTER CALCULATOR\n");
    printf("Enter 1 for Pounds to Kilograms\n");
    printf("Enter 2 for Kilograms to Pounds\n");
    printf("Please make your choice (1 0r 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        //pounds to kilograms
        printf("Enter your weight in pounds: ");
        scanf("%f", &pound);
        kilogram = pound/2.20462;
        printf("%.2f in pounds is %.2f in kilogram", pound, kilogram);
    }

    else if(choice == 2){
        //kilogram to pound
        printf("Enter your weight in kilograms: ");
        scanf("%f", &kilogram);
        pound = kilogram * 2.20462;
        printf("%.2f in kilogram is %.2f in pounds", kilogram, pound);
    }
    

    else{
        printf("Invalid option!, Please input 1 or 2");

    }

    return 0;
}