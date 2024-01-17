#include <stdio.h>
int main(){

    float C,F;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&C);

    F = 1.8*C+32 ;
    printf("The temperature in Fahrenheit is: %f", F);

    return 0;
}
