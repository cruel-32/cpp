struct Node {   
    Node* prev;
    Node* next;
    void* data;
};

struct LinkedList {   
    Node* head;
};

LinkedList* createList();

Node* insertNode(Node *old);

void removeNode(Node *target);

Node* findNode(LinkedList *linkedList ,void *data);
