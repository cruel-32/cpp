#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    Node* next;
    void* data;
};

class LinkedList {
public:
    Node* head;

    LinkedList();
    void addData(void* data);
    void showAllNodes();
};

#endif