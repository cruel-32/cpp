#include <iostream>
using namespace std;

#include "Student.h"

Student* createStudentInfo(int student_number){
    Student *student = new Student;

    student->student_number = student_number;

    cout << "enter a name (string)" << "\n";
    cin >> student->name;

    cout << "enter a korea score (float)" << "\n";
    cin >> student->korea;

    cout << "enter a english score (float)" << "\n";
    cin >> student->english;

    cout << "enter a math score (float)" << "\n";
    cin >> student->math;

    return student;
}

void showStudentInfo(void* data){
    Student *student = (Student*)data;
    cout << "student number : " << student->student_number << "\n";
    cout << "student name : " << student->name << "\n";
    cout << "student korea score : " << student->korea << "\n";
    cout << "student english score : " << student->english << "\n";
    cout << "student math score : " << student->math << "\n";
}
