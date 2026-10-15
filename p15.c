#include<stdio.h>
int main()
{
    int n,i, x, found;
    printf("how many  numbers");
    scanf("%d", &n);
    found=0;
    printf("enter the numbers");
    for(i=0;i<n;i++)
    
    {
        scanf("%d", &x); 
     if(x%5==0 && found==0)
     {
         printf("mf %d", x);
         found=1;
     }
    }
     
    
    return 0;
   
    
}