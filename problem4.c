#include <stdio.h>
int main (){
    int num1, num2, divide;

    printf("enter two integer: ");
    scanf("%d %d",&num1, &num2);

    divide = num1 / num2;
    printf("The divide of %d and %d is: %d\n", num1, num2, divide);
    return 0;
}
