#include<stdio.h>
#include<string.h>

struct Student{
    char name[100];
    int roll_no;
    char section;
    int marks;
};

int main() {
    int student_number;
    printf("Enter the number of students: ");
    scanf("%d", &student_number);

    struct Student students[student_number];

    for(int i = 0; i < student_number; i++){
        printf("Enter the name of the student: ");
        char student_name[100];
        fflush(stdin);
        gets(student_name);

        strcpy(students[i].name, student_name);

        printf("Enter roll no: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter section: ");
        fflush(stdin);
        scanf("%c", &students[i].section);

        printf("Enter marks: ");
        scanf("%d", &students[i].marks);


        printf("\n\n");
    }

    for(int i = 0; i < student_number; i++){
        printf("Student name: %s\n", students[i].name);
        printf("Student roll: %d\n", students[i].roll_no);
        printf("Student section: %c\n", students[i].section);
        printf("Student marks: %d\n\n", students[i].marks);
    }
}

