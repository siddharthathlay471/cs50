#include<stdio.h>
int main()
{   int i, n;
    float sum,x,division , average;
    printf("how many the numbers");
    scanf("%d", &n);
    sum=0;
    average=0;
    
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
    scanf("%f", &x);
    sum=sum+x;
    average=sum/n;
    }
    printf("the average of these numbers are %f", average);

}