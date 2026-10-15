#include<stdio.h>
int main()
{
    int n,x=0,r, original;
    printf("enter a number");
    scanf("%d", &n);
    original=n;
    while(n!=0)
        {
            r=n%10;
            x=x*10+r;
            n=n/10;    
        }
    if(original==x)
        printf("the number is pall");
    else
        printf("its not pall");
    return 0;
    
}
