#include <stdio.h>

typedef struct {
    int roll;
    char name[30];
    int marks[5];
    int total;
    float avg;
} Student;

int main() {
    Student s[3];
    Student *ptr;
    
    int i, j;
    int top_index = 0;
    float top_avg = 0.0;

    for(i = 0; i < 3; i++) {
        ptr = &s[i];
        
        printf("\nEnter roll number for student %d: ", i + 1);
        scanf("%d", &ptr->roll);
        
        printf("Enter name: ");
        scanf("%s", ptr->name);
        
        ptr->total = 0;
        printf("Enter marks for 5 subjects: ");
        for(j = 0; j < 5; j++) {
            

            scanf("%d%*c", &ptr->marks[j]); 
            ptr->total = ptr->total + ptr->marks[j];
        }
        
        ptr->avg = ptr->total / 5.0;
        
        if(ptr->avg > top_avg) {
            top_avg = ptr->avg;
            top_index = i;
        }
    }
    printf(" All Students Results\n");
    for(i = 0; i < 3; i++) {
        ptr = &s[i];
        printf("Name: %s, Roll: %d, Total: %d, Avg: %.2f\n", ptr->name, ptr->roll, ptr->total, ptr->avg);
    }
    ptr = &s[top_index];
    printf("\nTop Performer: %s (Roll: %d)\n", ptr->name, ptr->roll);
    return 0;
}