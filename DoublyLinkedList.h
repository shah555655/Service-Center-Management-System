#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "ServiceNode.h"

class DoublyLinkedList {
private:
    ServiceNode* head;
    ServiceNode* tail;
    ServiceNode* current;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    bool IsEmpty();

    void InsertRight(ServiceNode* node);
    void InsertAfterCurrent(ServiceNode* node);
    ServiceNode* RemoveCurrent();

    void Next();
    void Previous();

    void PrintCurrent();
    void PrintForward();
    void PrintBackward();
};

#endif