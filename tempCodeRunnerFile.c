#include <stdio.h>
int main()
{
    int  i,n,x;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        {
            scanf("%d" , &a[i]);
        }
        printf("enter the number to find");
        scanf("%d", &x);
        int low = a[0],high = a[n-1];
        while(low<=high)
        {
        int mid = (low+high)/2;
        if(a[mid]==x)
        printf("%d", i);
        if(a[mid]<x)
        mid=+1;
        else
        mid-1;
        }
        return 0;
        

}