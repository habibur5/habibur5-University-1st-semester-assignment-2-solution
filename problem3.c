#include <stdio.h>
int main (){
    int num1, num2, product;

    printf("enter two integer: ");
    scanf("%d %d",&num1, &num2);

    product = num1 * num2;
    printf("The product of %d and %d is: %d\n", num1, num2, product);
    return 0;
}
