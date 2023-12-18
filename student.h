// student.h
#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    float grade;
};

void initializeStudents(struct Student* students, int count);
void addStudent(struct Student* student, const char* name, float grade);
void displayStudent(const struct Student* student);

#endif // STUDENT_H
