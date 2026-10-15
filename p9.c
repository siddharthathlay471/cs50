// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, n, x, largest;
    printf("enter the number of elements ");
    scanf("%d", &n);

    printf("enter the elements");
    scanf("%d", &x);
    largest=x;
    
    for(i=1;i<=n;i++)
    {
    {
        scanf("%d", &x);
    }
    
        if(x>largest)
        {
        largest=x;
        }
            
    }
    printf("the largest number is %d", largest);
    
    return 0;
}