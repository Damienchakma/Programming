#include<stdio.h>
#include<string.h>

struct Student{
    char name[100];
    int roll_no;
    char section;
    int marks;
};

int main() {
    struct Student damian;
    strcpy(damian.name, "Damian");
    damian.roll_no = 1;
    damian.section = 'A';
    damian.marks = 100;

    printf("Name: %s\nRoll: %d\nSection: %c\nMarks: %d\n", damian.name, damian.roll_no, damian.section, damian.marks);
}
