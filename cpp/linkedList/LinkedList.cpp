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

    cout << "linkedList : " << linkedList << endl;

    return linkedList;
}

Node* insertNode(LinkedList *linkedList, void* data){
    Node *newNode = new Node;
    Node *old;
    old = findNode(linkedList);
    old->next = newNode;
    newNode->prev = old;
    newNode->data = data;
    return newNode;
}

void removeNode(Node *target){
    target->next->prev = target->prev;
    target->prev->next = target->next;
    // delete target->data;
    delete target;
}

//데이터값을 넘기면 해당 node를 찾아주고 넘기지 않으면 마지막 node를 찾아서 반환해줌.
Node* findNode(LinkedList *linkedList, void *data = NULL){
    cout << "data : " << data << "\n";
    Node *targetNode = linkedList->head;

    if(data == NULL){
        cout << "find last node";
        while (targetNode->next != NULL){
            targetNode = targetNode->next;
        }
    } else {
        cout << "find node at";

        while (targetNode->data != data){
            targetNode = targetNode->next;
        }
    }
    return targetNode;
}

void doLoofAction(LinkedList *linkedList, void (*callback)(void*)){
    Node *targetNode = linkedList->head;
    
    while (targetNode->data != NULL){
        callback(targetNode->data);
        targetNode = targetNode->next;
    }
}