#include <stdio.h>

struct Student {
    int rollNo;
    char name[40];
    float marks;
};

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                int t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    int key;
    printf("Enter key to search: ");
    scanf("%d", &key);

    int linIdx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            linIdx = i;
            break;
        }
    }
    if (linIdx != -1) {
        printf("Linear Search: Found at index %d\n", linIdx);
    } else {
        printf("Linear Search: Not found\n");
    }

    int low = 0, high = n - 1, binIdx = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (b[mid] == key) {
            binIdx = mid;
            break;
        } else if (b[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (binIdx != -1) {
        printf("Binary Search: Found at index %d\n", binIdx);
    } else {
        printf("Binary Search: Not found\n");
    }

    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d (rollNo name marks): ", i + 1);
        scanf("%d %s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }

    struct Student *ptr = &s[0];
    for (int i = 0; i < 3; i++) {
        if (s[i].marks > ptr->marks) {
            ptr = &s[i];
        }
    }
    printf("Highest marks: %.1f for roll number %d (%s)\n", ptr->marks, ptr->rollNo, ptr->name);

    int x, y;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &x, &y);
    int *p1 = &x;
    int *p2 = &y;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}