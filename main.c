// main.c
#include "student.h"
#include <stdio.h>

int main() {
    struct Student students[3];

    initializeStudents(students, 3);

    // Add student information
    addStudent(&students[0], "Alice", 85.5);
    addStudent(&students[1], "Bob", 78.2);
    addStudent(&students[2], "Charlie", 92.0);

    // Display student information
    for (int i = 0; i < 3; ++i) {
        printf("Student %d:\n", i + 1);
        displayStudent(&students[i]);
        printf("\n");
    }

    return 0;
}
