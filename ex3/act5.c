#include <stdio.h>

void printFibonacci(int count) {
    int a = 0, b = 1, next;

    for (int i = 0; i < count; i++) {
        printf("%d", a);
        if (i != count - 1)
            printf(", ");

        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nFibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printFibonacci(arr[i]);
    }

    return 0;
}