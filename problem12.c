
#include <stdio.h>
int main() {
    int num1, num2,bitwiseXOR;

    printf("Enter Two integer number: ");
    scanf("%d %d", &num1,&num2);
    bitwiseXOR = num1 ^ num2;
    printf("The bitwise Exclusive OR of %d and %d is: %d\n", num1, num2, bitwiseXOR);
    return 0;
}
