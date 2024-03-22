#ifndef STUDENT_LIST_H
#define STUDENT_LIST_H

// Including student model
#include "student_struct.h"
// List max size
#define MAX_SIZE 10

struct StudentList
{
    struct Student student[MAX_SIZE];
    int cont;
};

#endif //STUDENT_LIST_H