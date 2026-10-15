#include <stdio.h>
 int main()
 { int i , n , a ,c ,b ;
    printf("enter 3 numbers");
    scanf("%d %d %d", &a , &b , &c);
    if (a>b || a>c)

    printf("%d is the largest number",a);
    
        else if (b>c)
        printf("%d is the largest number" ,b);

            else if(c>a || c>b) 
            printf("%d is the largest number",c);
        return 0;
 }