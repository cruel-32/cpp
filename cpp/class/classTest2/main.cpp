#include <iostream>
using namespace std;

#include "LinkedList.h"

int main(){
    LinkedList* list = new LinkedList();

    int a[5] = {1,2,3,4,5};
    int* test = a;

    list->addData(test);
    list->addData(test);
    list->addData(test);
    list->addData(test);

    list->showAllNodes();

    return 0;
}
