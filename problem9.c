#include <stdio.h>
int main(){

    float C,F;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&F);

    C = (F - 32) * 5/9;
    printf("The temperature in Celsius is: %f",C);

    return 0;
}

