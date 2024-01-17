#include <stdio.h>

int main() {
    int num1, num2,bitwiseAnd;

    printf("Enter Two integer number: ");
    scanf("%d %d", &num1,&num2);

    bitwiseAnd = num1 & num2;

    printf("The bitwise AND of %d and %d is: %d\n", num1, num2, bitwiseAnd);

    return 0;
}
