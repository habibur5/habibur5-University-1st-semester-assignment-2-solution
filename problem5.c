#include <stdio.h>
int main (){
    float num1, num2, divide;

    printf("enter two Float number: ");
    scanf("%f %f",&num1, &num2);

    divide = num1 / num2;
    printf("The divide of %f and %f is: %f\n", num1, num2, divide);
    return 0;
}

