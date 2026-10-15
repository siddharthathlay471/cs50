#include <stdio.h>
int main()
{
    int i,n, r;
    printf("enter a number");
    scanf("%d", &n);
    
    r=n%10;
    printf("%d\n", r);
    n=n/10;
    printf("%d\n", n);

return 0;
}