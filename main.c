#include <stdio.h>
#include "src/student_functions.c"

int main()
{
    // Get Student input data
    struct Student student = InputStudentData();
    // Print student data
    PrintStudent(student);

    return 0;
}