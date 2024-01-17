#include <stdio.h>
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    int result = number & 7;
    printf("The result of %d modulo 8 using bitwise AND is: %d\n", number, result);

    return 0;
}
