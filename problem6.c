#include <stdio.h>

int main (){

    int num1, num2, remainder;

    printf("enter two integer: ");
    scanf("%d %d",&num1, &num2);

    remainder = num1 % num2;
    printf("The result of remainder = %d",remainder);
    return 0;

}
