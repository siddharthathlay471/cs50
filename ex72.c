// Define a Student structure with roll number, a name, and an array storing marks in five subjects. Read one student's details, then calculate and display the total and average marks. Use a loop to process the marks.
#include<stdio.h>
struct student{
    char name[30];
    int id;
    int a[5];
    
};
int main()
{
    struct student s1;
    printf("enter the name of student:");
    scanf("%s", s1.name);
    printf("ente the roll number:");
    scanf("%d",&s1.id);
    printf("enter the marks of 5 subject");
    int i,sum=0;
    int a[i];
    for(int i=0;i<5;i++)
        {
            scanf("%d", &s1.a[i]);
            sum = sum+s1.a[i];
        }
    float avg = sum/5;
    printf("name %s\n", s1.name);
    printf("id %d\n", s1.id);
    for(i=0;i<5;i++){
    printf("marks  are %d\n", s1.a[i]);
    }
    printf("sum is %d\n",sum);
    printf("avg is %.2f", avg);
    return 0;
}