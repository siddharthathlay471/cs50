#include <stdio.h>
int main()
{
    int marks[50][50];
    int students, subjects;
    int i, j;
    int total, highest;

    printf("Enter number of students:");
    scanf("%d", &students);
    printf("Enter number of subjects:");
    scanf("%d", &subjects);
    printf("Enter marks:\n");
    for(i = 0; i < students; i++)
    {
        for(j = 0; j < subjects; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("Marks Matrix:\n");
    for(i = 0; i < students; i++)
    {
        for(j = 0; j < subjects; j++)
        {
            printf("%d ", marks[i][j]);
        }

        printf("\n");
    }
    highest = marks[0][0];
    printf("Student Total and Average:\n");
    for(i = 0; i < students; i++)
    {
        total = 0;
        for(j = 0; j < subjects; j++)
        {
            total = total + marks[i][j];

            if(marks[i][j] > highest)
            {
                highest = marks[i][j];
            }
        }
        printf("Student %d Total = %d\n", i + 1, total);
        printf("Student %d Average = %.2d\n", i + 1, (int)total / subjects);
    }
    printf("Subject Total:\n");
    for(j = 0; j < subjects; j++)
    {
        total = 0;

        for(i = 0; i < students; i++)
        {
            total = total + marks[i][j];
        }

        printf("Subject %d Total = %d\n", j + 1, total);
    }
    printf("\nHighest Mark = %d\n", highest);
    return 0;
}