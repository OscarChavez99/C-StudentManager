#include <stdio.h>
#include "src/student_list_functions.c"
#include "src/menu.c"

int main()
{
    int option = 0;
    struct StudentList studentList;
    // Initializing list count
    InitializeStudentList(&studentList);

    do
    {
        DisplayMenu();
        printf("Choose an option: ");
        scanf("%i", &option);

        switch(option)
        {
            case 1:
                AddStudentToList(&studentList);
                break;
            
            case 2:
                PrintStudentList(studentList);
                break;

            case 3:
                break;
                
            default:
                printf("Invalid option, try again\n");
                break;
        }
    }
    while(option != 3);

    return 0;
}