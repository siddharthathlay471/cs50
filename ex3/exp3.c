#include <stdio.h>

int main() {
    int n;
    int marks[100];
    int total = 0;
    int highest, lowest;
    int passCount = 0, failCount = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d marks:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Entered Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    average = (float) total / n;

    highest = marks[0];
    lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 50) {
            passCount++;
        } else {
            failCount++;
        }
    }

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Mark: %d\n", highest);
    printf("Lowest Mark: %d\n", lowest);
    printf("Students >= 50: %d\n", passCount);
    printf("Students < 50: %d\n", failCount);

    printf("Marks in Reverse Order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}