#include <iostream>
using namespace std;

#include "LinkedList.h"

LinkedList::LinkedList(){
    head = new Node;
    head->prev = NULL;
    head->next = NULL;
    head->data = NULL;

};

void LinkedList::addData(void* data){
    Node* newNode = new Node;
    Node* nowNode = head;

    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = NULL;

    while(nowNode->next != NULL){
        nowNode = nowNode->next;
    }
    nowNode->next = newNode;
    newNode->prev = nowNode;

    newNode->data = data;

}

void LinkedList::showAllNodes(){
    Node* nowNode = head;

    while(nowNode->next != NULL){
        cout << "test " << nowNode->data << endl;
        nowNode = nowNode->next;
    }
}