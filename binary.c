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
        int low = 0,high = n-1;
        while(low<=high)
        {
        int mid = (low+high)/2;
        if(a[mid]==x)
        {
        printf("%d", mid);
        break;
        }
        else if(a[mid]<x)
        low=mid+1;
        else
        high =mid-1;
        }
        return 0;


}