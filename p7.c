
#include <stdio.h>

int main() {
    int a ,b;
     printf ("enter two numbers");
     scanf("%d %d" ,&a ,&b);

     if (a<b)
     {
        printf("%d is the smallest number" ,a);

     }
     else if(b<a)
     {
        printf("%d is the smallest number" ,b);
     }
     else
     {
        printf ("both %d and %d are same",b ,a);
     }
     return 0;
}