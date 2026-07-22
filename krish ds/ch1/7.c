// Delete an element at user defined position.
#include <stdio.h>

int main() {
    int a[50], n, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // shift elements left
    for(i=pos; i<n-1; i++)
        a[i] = a[i+1];

    n--;  // size reduced

    printf("Array after deletion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
