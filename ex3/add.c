#include <stdio.h>

int main()
{
    int sum = 0, n, i, a[10];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum =sum + a[i];
    }

    printf("Array series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if (i < n - 1)
            printf(" + ");
    }

    printf(" = %d\n", sum);

    return 0;
}