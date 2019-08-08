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

}