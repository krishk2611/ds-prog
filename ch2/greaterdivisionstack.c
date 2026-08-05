#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Keep subtracting the smaller number from the larger one until they are equal
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("GCD is: %d\n", a);

    return 0;
}
