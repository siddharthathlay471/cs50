#include <stdio.h>
int main()
{
    int i ,n, prime;
    printf("enter a number");
    scanf("%d", &n);
    prime=1;
    
    for(i=2;i<n;i++)
        {
            if(n%i==0)
                prime=0;   
        }
    if(prime==1)
        printf("the number is prime aman lode");
    else
        printf("the number is not prime aman lode");
        
    
    return 0;
}
