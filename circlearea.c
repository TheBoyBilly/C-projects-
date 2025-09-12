#include <stdio.h>
#include <math.h>

int main(void) {

    // SOME MATH FUNCTIONS

    /*
    int x = "25"

    x = sqrt(x);
    x = pow(x, 3);
    x = round(x);
    x = ceil(x);
    x = floor(x);
    x = abs(x);
    x = log(x);
    x = cos(x);
    x = sin(x);
    x = tan(x);

    printf("%d", x);
    */

    //AREA, SA, AND VOLUME OF A CIRCLE

    double area = 0.0;
    double surfaceArea = 0.0;  
    double volume = 0.0; 
    double radius = 0.0;
    const double PI = 3.14159;
    char SIunit[] = "SqareUnits";

    printf("Enter a radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);
    
    printf("Area of Circle = %.2lf %s\n", area, SIunit);
    printf("Surface Area of Circle = %.2lf %s\n", surfaceArea, SIunit);  
    printf("Volume of Circle = %.2lf %s", volume, SIunit);
    return 0;
}