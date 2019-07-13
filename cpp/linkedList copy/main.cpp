#include <iostream>
using namespace std;

#include "Student.h"
#include "LinkedList.h"

int main()
{
    enum Menu {home, insertMenu, removeMenu, showOneStudent, showAllStudents, endProgram};
    int student_number = 0;
    int menuNum = 0;

    LinkedList *testList = createList();
    cout << "testList : " << testList << endl;

    while(menuNum != 5){
        cout << "Enter a meunu number" << endl;
        cout << "[1] insert a student infomation" << endl;
        cout << "[2] remove a student infomation" << endl;
        cout << "[3] show a student infomation" << endl;
        cout << "[4] show all students infomation" << endl;
        cout << "[5] end" << endl;

        cin >> menuNum;

        switch (menuNum) {
            case home : 
                cout << "back home" << endl;
                break;
            case insertMenu:
                cout << "=====insert menu=====" << endl;
                student_number++;
                Student *student;
                student = createStudentInfo(student_number);
                cout << "testList : " << testList << endl;

                // insertNode(testList, student);
                break;
            case removeMenu:
                cout << "=====remove menu=====" << endl;
                break;
            case showOneStudent:
                cout << "=====show a student infomation menu=====" << endl;
                break;
            case showAllStudents:
                cout << "=====show all students infomation menu=====" << endl;
                // doLoofAction(); //testList, showStudentInfo
                break;
            case endProgram:
                cout << "Good Bye" << endl;
                break;
            default:
                break;
        };
    }

    return 0;
};