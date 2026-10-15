#include<stdio.h>

 int main()
{
    int x,y ;
    printf("enter two numbers");
    scanf("%d  %d",&x,&y);

    if(x<y || x==y)
    {
        printf("%d is less then or equal to %d", x,y);

    }
    else
    {
        printf("%d is greater then %d", x,y);

    }
    return 0;



    
}