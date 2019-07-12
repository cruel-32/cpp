#include <iostream>
using namespace std;

#include "Student.h"
#include "LinkedList.h"

int main()
{   
    int student_number = 0;

    LinkedList *testList = createList();
    cout << "testList : " << testList << "\n";

    Student *student = new Student;

    student_number++;
    student->student_number = student_number;
    student->name = "csh";
    student->korea = 90;
    student->english = 100;
    student->math = 70;

    testList->head->data = student;

    cout << "student : " << student << "\n";
    cout << "student->name : " << student->name << "\n";

    Student* std = (Student*)testList->head->data;

    cout << "std->name : " << std->name << "\n";


    return 0;
}