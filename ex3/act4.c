#include <stdio.h>
int main()
{
    int a[100], i, j, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The original array is: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    i = 0;
    j = n - 1;

    while(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    printf("\nThe reversed array is: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}