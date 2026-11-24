```c
#include <stdio.h>

struct student
{
    int rollno;
    char name[30];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("Roll No\tName\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n");
    printf("---------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
               s[i].rollno,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }

    return 0;
}
```
