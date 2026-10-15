#include<stdio.h>
int main()
{    
   
    int i,n,m,j;
    printf("enter the number of rows");
    scanf("%d", &n);
    printf("enter the number of coloum");
    scanf("%d", &m);
     int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d", a[i][j]);
        }
    }

return 0;
}