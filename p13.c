#include<stdio.h>
int main()
{           
    int i, n, x, counter;

    printf("how many numbers");
    scanf("%d", &n);
    counter=0;
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d", &x);

    if(x>10)
    {
    counter=counter+1;
    }
    }
    printf("the nu0mber greater than 10 is %d ", counter);
    
    return 0;
}

