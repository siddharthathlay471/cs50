#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    printf("enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("the sum of number is %d", sum);

    return 0;
        
}