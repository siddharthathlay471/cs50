#include<stdio.h>
int main()
{
    int n,r,x,even,odd;
    printf("enter a number");
    scanf("%d", &n);
    x=0;
    odd=0;
    even=0;
    while(n!=0)
        {
            x=n%10;
            if(x%2==0)
                even=even+1;
            else
                odd=odd+1;
            n=n/10;
                
        }
    printf("even %d\n", even);
    printf("odd %d", odd);
    return 0;
    
}