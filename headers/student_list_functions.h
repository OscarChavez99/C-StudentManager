#ifndef STUDENT_LIST_FUNCTIONS_H
#define STUDENT_LIST_FUNCTIONS_H

void InitializeStudentList(struct StudentList *StudentList);
struct Student CaptureStudent();
void AddStudentToList(struct StudentList *studentList);
void PrintStudentList(struct StudentList studentList);

#endif