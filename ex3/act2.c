#include <stdio.h>

int main()
{    
int n ,i , gad[10], sum=0, odd=0, even=0;
printf("enter the number of elements in the array:");
scanf("%d" , &n);
for(i=0;i<n;i++)
{
    scanf("%d", &gad[i]);
    sum+=gad[i];
    if(gad[i]%2==0)
    {
        even++;
       
    }
    else
    {
        odd++;
    }
}
float average = (float)sum/n;
printf("sum of even numbers is: %d\n", sum);
printf("count of even numbers is: %d\n", even);
printf("count of odd numbers is: %d\n", odd);
printf("average of even numbers is: %.2f\n", average);
}