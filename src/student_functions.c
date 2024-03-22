// Include library for input and output operations
#include <stdio.h>

// Include the header file for student functions and Struct
#include "structs/student_struct.h"

// Functions definition
void PrintStudent(struct Student student){
    printf("Student id: %i\n", student.id);
    printf("Student name: %s\n", student.name);
}

struct Student InputStudentData(){
    struct Student student;
    
    printf("Enter student id: ");
    scanf("%i", &student.id);
    printf("Enter student name: ");
    scanf("%s", student.name);

    return student;
}