
#include<stdio.h>
void double_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
        {
            arr[i]=arr[i]*2;
        }
    for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    
}
int main()
{
    int x,i,y;
    printf("enter array size");
    scanf("%d",&y);
    int arr[y];
    printf("enter the values of array");
        for(int i=0;i<y;i++){
            scanf("%d",&arr[i]);     
        }
    // for(i=0;i<y;i++){
    //     printf("%d ",arr[i]);
    // }
    double_array(arr,y);
    
    return 0;
}
