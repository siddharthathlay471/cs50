#include <stdio.h>
#include <ctype.h>

struct Student
{
    int roll;
    char name[30];
    float cgpa;
};

// Q1: Sum and Average
void question1()
{
    FILE *fp;
    int n,sum=0,count=0;
    float avg;

    fp=fopen("numbers.txt","w");

    if (fp==NULL)
    

    printf("Enter 10 numbers:\n");

    for (int i=0; i<10;i++)
    {
        scanf("%d",&n);
        fprintf(fp,"%d\n",n);
    }

    fclose(fp);

    fp=fopen("numbers.txt","r");

    if (fp==NULL)
    {
        printf("File Error!\n");
        return;
    }

    while (fscanf(fp,"%d",&n)==1)
    {
        sum=sum+n;
        count++;
    }

    fclose(fp);

    if (count>0)
    {
        avg=(float)sum/count;

        printf("\nTotal Numbers=%d",count);
        printf("\nSum=%d",sum);
        printf("\nAverage=%.2f\n",avg);
    }
}

// Q2: Count Vowels

void question2()
{
    FILE *fp;
    int ch, count = 0;

    fp = fopen("story.txt", "r");

    if (fp == NULL)
    {
        printf("File Not Found!\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    fclose(fp);

    printf("Total Vowels = %d\n", count);
}

// Q3: Merge Two Files

void question3()
{
    FILE *f1, *f2, *f3;
    int ch;

    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "r");

    if (f1 == NULL || f2 == NULL)
    {
        printf("Input File Not Found!\n");

        if (f1 != NULL)
            fclose(f1);

        if (f2 != NULL)
            fclose(f2);

        return;
    }

    f3 = fopen("c.txt", "w");

    if (f3 == NULL)
    {
        printf("File Error!\n");
        fclose(f1);
        fclose(f2);
        return;
    }

    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f3);
    }

    fputc('\n', f3);

    while ((ch = fgetc(f2)) != EOF)
    {
        fputc(ch, f3);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Files Merged Successfully!\n");
}

// Q4: Copy File in Uppercase
void question4()
{
    FILE *src, *dst;
    int ch;

    src = fopen("input.txt", "w");

    if (src==NULL)
    {
        printf("File Error!\n");
        return;
    }

    fprintf(src, "hello students welcome to c language");
    fclose(src);

    src = fopen("input.txt", "r");
    dst = fopen("uppercase.txt", "w");

    if (src==NULL || dst==NULL)
    {
        printf("File Error!\n");
        if (src != NULL) fclose(src);
        if (dst != NULL) fclose(dst);
        return;
    }

    while ((ch=fgetc(src))!=EOF)
        fputc(toupper(ch), dst);

    fclose(src);
    fclose(dst);

    printf("Uppercase File Created Successfully!\n");
}

// Q5: Highest CGPA


void question5()
{
    FILE *fp;
    struct Student s, top;

    fp = fopen("student.dat", "wb");

    if (fp == NULL)
    {
        printf("File Error!\n");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d Details:\n", i + 1);

        printf("Name: ");
        scanf("%29s", s.name);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("CGPA: ");
        scanf("%f", &s.cgpa);

        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("File Error!\n");
        return;
    }

    if (fread(&top, sizeof(top), 1, fp) != 1)
    {
        printf("No Record Found!\n");
        fclose(fp);
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.cgpa > top.cgpa)
            top = s;
    }

    fclose(fp);

    printf("\nHighest CGPA Student:\n");
    printf("Name = %s\n", top.name);
    printf("Roll = %d\n", top.roll);
    printf("CGPA = %.2f\n", top.cgpa);
}

// Main Function
int main()
{
    int choice;

    while (1)
    {

        printf("1. Sum and Average of 10 Numbers\n");
        printf("2. Count Vowels in a File\n");
        printf("3. Merge Two Files\n");
        printf("4. Copy File in Uppercase\n");
        printf("5. Find Highest CGPA Student\n");
        printf("0. Exit\n");

        printf("\nEnter Your Choice: ");

        if (scanf("%d", &choice)!=1)
        {
            printf("Invalid Input! Enter a number.\n");

            while (getchar()!='\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                question1();
                break;

            case 2:
                question2();
                break;

            case 3:
                question3();
                break;

            case 4:
                question4();
                break;

            case 5:
                question5();
                break;


           
            case 0:
            printf("Program Exited Successfully!\n");
            return 0;
        

            default:
                printf("\nInvalid Choice! Try Again.\n");
        }

        printf("\nActivity Completed! Select Again.\n");
    }

    return 0;
}