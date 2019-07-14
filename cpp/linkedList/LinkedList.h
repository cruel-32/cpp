struct Node {   
    Node* prev;
    Node* next;
    void* data;
};

struct LinkedList {   
    Node* head;
};


LinkedList* createList();

Node* insertNode(LinkedList *linkedList, void* data);

void removeNode(Node *target);

Node* findLastNode(LinkedList *linkedList);

Node* findNodeByStudentNumber(LinkedList *linkedList, int student_number);

void doLoofAction(LinkedList *linkedList, void (*callback)(void*));

