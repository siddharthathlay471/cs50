#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int max = INT_MIN, min = INT_MAX;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);

    return 0;
}