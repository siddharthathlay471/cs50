// Declare a two-dimensional integer array. 
//2. Read the number of rows and columns. 
//3. Read all matrix elements using nested loops. 
//4. Display the matrix in row and column form.
//5. Observe how the outer and inner loops access the elements.
#include<stdio.h>
int main()
{
    int i, j ,a[2][2]={(1,1),(2,2)};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d", &a[i][j]);
    }
    for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        printf("%d", a[i][j]);
        printf("\n");
    }
return 0;
}