#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = number >> 1;
    printf("The result of dividing %d by 2 using shift operator is: %d\n", number, result);

    return 0;
}

