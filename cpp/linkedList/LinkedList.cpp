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

Node* findNode(LinkedList *linkedList, void *data = NULL){
    Node *targetNode = linkedList->head;

    if(data == NULL){
        while (targetNode->next != NULL){
            targetNode = targetNode->next;
        }
    } else {
        while (targetNode->data != data){
            targetNode = targetNode->next;
        }
    }
    return targetNode;
}

Node* insertNode(LinkedList *linkedList, void* data){
    Node *newNode = new Node;
    Node *old;
    old = findNode(linkedList);
    old->next = newNode;
    newNode->prev = old;
    newNode->next = NULL;
    newNode->data = data;

    return newNode;
}

void removeNode(Node *target){
    target->next->prev = target->prev;
    target->prev->next = target->next;
    // delete target->data;
    delete target;
}


void doLoofAction(LinkedList *linkedList, void (*callback)(void*)){
    Node *targetNode = linkedList->head->next;
    
    while (targetNode != NULL){
        callback(targetNode->data);
        targetNode = targetNode->next;
    }
}