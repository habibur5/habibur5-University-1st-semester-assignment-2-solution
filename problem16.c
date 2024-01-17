#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = number & 3;
    printf("The result of %d modulo 4 using bitwise AND is: %d\n", number, result);
    return 0;
}

