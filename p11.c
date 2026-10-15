#include <stdio.h>
int main()

{
    int i, n, x, positive, negative, zero;
    printf("enter the amount of numbers");
    scanf("%d", &n);
    positive=0;
    negative=0;
    zero=0;     

    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
    
    scanf("%d", &x);
    if(x<0)
    negative=negative+1;
    else if(x>0)
    positive=positive+1;
    else
    zero=zero+1;
    }
    printf("negative = %d\n", negative);
    printf("positive = %d\n", positive);
    printf("zero = %d", zero);

return 0;
}