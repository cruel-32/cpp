#include <iostream>
using namespace std;

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

Node* insertNode(Node *old, void* data){
    Node *newNode = new Node;

    old->next = newNode;
    newNode->prev = old;
    newNode->data = data;

    return newNode;
}

void removeNode(Node *target){
    target->next->prev = target->prev;
    target->prev->next = target->next;

    delete target->data;
    delete target;
}

Node* findNode(LinkedList *linkedList ,void *data){
    cout << "data : " << data << "\n";

    if(linkedList -> head -> data == data){
        cout << "equals";
    } else {
        cout << "equals";
    }

    return linkedList -> head;
}