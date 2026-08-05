#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX];
int rear = -1;
int front = -1;

void insert() {
    int num;

    if (rear == MAX - 1) {
        printf("\nQueue Overflow!\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &num);

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = num;
    printf("%d inserted into queue\n", num);
}

void delete() {

    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!\n");
        return;
    }

    printf("Deleted element is: %d\n", queue[front]);
    front++;


    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    int i;
    if (front == -1) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nQueue elements:\n");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n----- QUEUE MENU -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program terminated.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
