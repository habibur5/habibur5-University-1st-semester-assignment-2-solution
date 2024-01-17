
#include <stdio.h>
int main() {
    int num1, num2,bitwiseOR;

    printf("Enter Two integer number: ");
    scanf("%d %d", &num1,&num2);

    bitwiseOR = num1 | num2;

    printf("The bitwise OR of %d and %d is: %d\n", num1, num2, bitwiseOR);

    return 0;
}
