#include <stdio.h>
int main()
{
    int x,i,n, multi;
    printf("enter a number");
    scanf("%d", &n);
    multi=0;
    for(i=1;i<=10;i++)
    {
    multi=n*i;
    printf("%d x %d = %d\n",n,i, multi);
    }
    
    return 0;
}