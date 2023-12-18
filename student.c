// student.c
#include "student.h"
#include <stdio.h>
#include <string.h>

void initializeStudents(struct Student* students, int count) {
    for (int i = 0; i < count; ++i) {
        strcpy(students[i].name, "");
        students[i].grade = 0.0;
    }
}

void addStudent(struct Student* student, const char* name, float grade) {
    strcpy(student->name, name);
    student->grade = grade;
}

void displayStudent(const struct Student* student) {
    printf("Name: %s\n", student->name);
    printf("Grade: %.2f\n", student->grade);
}
