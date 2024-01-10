#include <stdio.h>

struct Student {
        char name[50];
        int roll;
        float mark;
};

int main() {
    
    int count;
    printf("Enter number of students: ");
    scanf("%d", &count);
    
    struct Student students[count];
    
    for(int i = 0; i < count; i++){
        printf("Enter name of student %d : ", i+1);
        scanf("%s", &students[i].name);
        printf("Enter roll of student %d : ", i+1);
        scanf("%d", &students[i].roll);
        printf("Enter mark of student %d : ", i+1);
        scanf("%f", &students[i].mark);
    }
    for(int i = 0; i < count; i++)
    {
        printf("Student %d Details: \n", i+1);
        printf("Name : %s\n", students[i].name);
        printf("Roll : %d\n",  students[i].roll);
        printf("Mark : %.2f\n", students[i].mark);
    }

    return 0;
}