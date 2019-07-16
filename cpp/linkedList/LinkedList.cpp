#include <iostream>
using namespace std;

#include "Student.h"
#include "LinkedList.h"

LinkedList* createList(){
    Node *head = new Node;

    head->prev = NULL;
    head->next = NULL;
    head->data = 0;

    LinkedList *linkedList = new LinkedList;
    linkedList->head = head;

    return linkedList;
}

Node* findLastNode(LinkedList *linkedList){
    Node *targetNode = linkedList->head;
    while (targetNode->next != NULL){
        targetNode = targetNode->next;
    }
    return targetNode;
}

Node* findNodeByStudentNumber(LinkedList *linkedList, int student_number){
    Node *targetNode = linkedList->head;
    Student *studuentData;
    do
    {
        targetNode = targetNode->next;
        if(targetNode == NULL){
            break;
        } else {
            studuentData = (Student*)(targetNode->data);
        }
    } while (studuentData->student_number != student_number);

    return targetNode;
}

Node* insertNode(LinkedList *linkedList, void* data){
    Node *newNode = new Node;
    Node *old;
    old = findLastNode(linkedList);
    old->next = newNode;
    newNode->prev = old;
    newNode->next = NULL;
    newNode->data = data;

    return newNode;
}

void removeNode(Node *target){
    if(target->next != NULL){
        target->next->prev = target->prev;
    } 
    target->prev->next = target->next;
    delete target->data; //지워주지 않으면 메모리 누수. 하지만 warning이 뜨는거 왜 때문?
    delete target;
    target = NULL;
}


void doLoofAction(LinkedList *linkedList, void (*callback)(void*)){
    Node *targetNode = linkedList->head->next;
    
    while (targetNode != NULL){
        cout << "====================" << endl;
        callback(targetNode->data);
        targetNode = targetNode->next;
        cout << "====================" << endl;
    }
    if(targetNode == NULL){
        cout << "no more data" << endl;
    }
}