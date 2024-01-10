#include <stdio.h>

struct Subject {
    char name[50];
    int marks;
};

struct Student {
    char name[50];
    struct Subject subjects[5];
    int total;
};

int main() {

    int sub, stu;

    printf("Enter number of students : ");
    scanf("%d", &stu);
    printf("Enter number of subjects : ");
    scanf("%d", &sub);

    struct Student students[stu];
    struct Subject subjects[sub];

    for (int i = 0; i < sub; i++) {
        printf("Name of subject %d: ", i + 1);
        scanf("%s", subjects[i].name);
    }
    
    for (int i = 0; i < stu; i++) {
        printf("Name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        students[i].total = 0;

        for (int j = 0; j < sub; j++) {
            printf("Marks of %s: ", subjects[j].name);
            scanf("%d", &students[i].subjects[j].marks);

            students[i].total += students[i].subjects[j].marks;
        }
    }

    int subjectTotals[5] = {0};
    int grandTotal = 0;

    for (int i = 0; i < stu; i++) {
        for (int j = 0; j < sub; j++) {
            subjectTotals[j] += students[i].subjects[j].marks;
        }
        grandTotal += students[i].total;
    }

    printf("\nSubject-wise totals:\n");
    for (int j = 0; j < sub; j++) {
        printf("%s: %d\n", subjects[j].name, subjectTotals[j]);
    }

    printf("\nStudent-wise total: \n");
    for (int i = 0; i < stu; i++) {
        printf("%s: %d\n", students[i].name, students[i].total);
    }
    
    printf("\nGrand Total: %d\n", grandTotal);

    return 0;
}
