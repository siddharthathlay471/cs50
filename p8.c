
#include <stdio.h>

int main() {
    int x, i, n , smallest;
    printf("enter the  amount of numbers");
    scanf("%d", &n);

    printf("enter the numbers");
    scanf("%d", &x);

    smallest=x;
    
    for(i=1;i<=n-1;i++)
    {
        scanf("%d", &x);
    
    if(x<smallest)
    {
        smallest=x;
    }
    }
    {
        printf("the smallest number is %d", smallest);
    }

    return 0;
}