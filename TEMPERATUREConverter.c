#include <stdio.h>
#include <math.h>


int main(void){

    float celcius = 0.0f;
    float fahrenheit = 0.0f;
    char choice = 0;

    printf("TEMPERATUE CONVERTER PROGRAM\n");
    printf("C. To convert fahrenheit to celcius\n");
    printf("F. To convert celcius to fahrenheit\n");
    printf("Please select what you would like to convert to (C or F): ");
    scanf("%c", &choice);

    if (choice == 'C' )
    {
        /* F to C */
        printf("Input the temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f fahrenheit converted to celcius is %.2f", fahrenheit, celcius);

    }

    else if (choice == 'F')
    {
        /* C to F */
        printf("Input the temperature in celcius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.2f celcius converted to fahrenheit is %.2f", celcius, fahrenheit);
    }

    else{
        printf("invalid input!, Please select either C or F");
    }
    
    return 0;
} 