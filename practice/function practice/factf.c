#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    return fact;
}
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int faact=factorial(x);
    printf("fact is %d", faact);
    return 0;
}