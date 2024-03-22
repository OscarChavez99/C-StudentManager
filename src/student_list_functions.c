// Include the Struct files
#include "../structs/student_struct.h"
#include "../structs/student_list.h"

// Functions definitions

void InitializeStudentList(struct StudentList *studentList)
{
    studentList->cont = 0;
}

// Captures student data and returns a Student struct
struct Student CaptureStudent()
{
    struct Student student;
    
    printf("Enter student id: ");
    scanf("%i", &student.id);
    printf("Enter student name: ");
    scanf("%s", student.name);

    return student;
}

// Adds a new student to the provided student list
void AddStudentToList(struct StudentList *studentList)
{
    if (studentList->cont < MAX_SIZE) {
        struct Student newStudent = CaptureStudent();
        studentList->student[studentList->cont++] = newStudent;
    }

    else
        printf("Maximum size of the list reached\n");
}

// Prints the list of students
void PrintStudentList(struct StudentList studentList)
{
    for (int i = 0; i < studentList.cont; i++) {
        printf("Student id: %i\n", studentList.student[i].id);
        printf("Student name: %s\n", studentList.student[i].name);
    }
}