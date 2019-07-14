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

    while(menuNum != 5){
        cout << "Enter a meunu number (1~5)" << endl;
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
                cout << "=====insert student infomation=====" << endl;
                student_number++;
                Student *student;
                student = createStudentInfo(student_number);

                Node* insertedNode;
                insertedNode = insertNode(testList, student);
                break;
            case removeMenu:
                cout << "=====remove student infomation=====" << endl;
                cout << "=====enter student a student number=====" << endl;

                int remove_number;
                cin >> remove_number;
                Node* removeTargetNode;
                removeTargetNode = findNodeByStudentNumber(testList, remove_number);
                if(removeTargetNode == NULL){
                    cout << "no data"<< endl;
                } else {
                    removeNode(removeTargetNode);
                }
                break;
            case showOneStudent:
                cout << "=====show a student infomation menu=====" << endl;
                cout << "=====enter student a student number=====" << endl;

                int show_number;
                cin >> show_number;
                Node* showTargetNode;
                showTargetNode = findNodeByStudentNumber(testList, show_number);

                if(showTargetNode == NULL){
                    cout << "no data"<< endl;
                } else {
                    showStudentInfo(showTargetNode->data);
                }
                break;
            case showAllStudents:
                cout << "=====show all students infomation menu=====" << endl;
                doLoofAction(testList, showStudentInfo);
                break;
            case endProgram:
                cout << "Good Bye" << endl;
                break;
            default:
                cout << "Enter a correct number" << endl;
                break;
        }
    }

    return 0;
};