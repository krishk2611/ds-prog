#include <stdio.h>

int main() {
    int num, divisor = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("No divisor greater than 1 exists.\n");
        return 0;
    }


    while (num % divisor != 0) {
        divisor++;
    }

    printf("Smallest divisor (greater than 1) is: %d\n", divisor);

    return 0;
}
