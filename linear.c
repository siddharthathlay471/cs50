#include <stdio.h>
int main()
{
    int i,x,n;
    
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        {  
            scanf("%d", &a[i]);
        }
        
    printf("enter the number to find");
    scanf("%d", &x);
    
    for(i=0;i<n;i++)
        {
    if(a[i]==x)
        printf("%d", i);

}
    return 0;
}