#include <stdio.h>
int main()

{
    int i, n, x , sum;
    printf("enter the amount of numbers");
    scanf("%d", &n);
    sum=0;

    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        sum=sum+x;
    }
    printf("enter the sum %d", sum);
    
return 0;
}