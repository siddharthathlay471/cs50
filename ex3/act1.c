#include <stdio.h>

int main()
{
    int a[10], n, i;
    
    printf("enter the elements of the array: "  );
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
    printf("enter the elements of the array: %d", i);
    scanf("%d" , &a[i]);
    }
    printf("the elements of the array are: ");
    for(i=0; i<n;i++)
    {
        printf("%d ", a[i]);
    }

return 0;
}