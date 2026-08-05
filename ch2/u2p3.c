#include <stdio.h>
#include <stdlib.h>

#define MAX 10

char stack[MAX];
int top = -1;

void push() {
    char val;
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot insert element.\n");
    } else {

        while (getchar() != '\n');

        printf("Enter element to push: ");
        scanf("%c", &val);
        top++;
        stack[top] = val;
        printf("Inserted successfully.\n");
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Stack is empty.\n");
    } else {
        printf("Deleted element is: %c\n", stack[top]);
        top--;
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 6:
                printf("Program terminated.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
