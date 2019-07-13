struct Node {   
    Node* prev;
    Node* next;
    void* data;
};

struct LinkedList {   
    Node* head;
};


LinkedList* createList();

// Node* insertNode(LinkedList *linkedList, void* data);

// void removeNode(Node *target);

// Node* findNode(LinkedList *linkedList ,void *data);

void doLoofAction() //LinkedList *linkedList, void (*callback)(void*)

