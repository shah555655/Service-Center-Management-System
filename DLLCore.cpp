#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
    current = nullptr;
}

bool DoublyLinkedList::IsEmpty() {
    return head == nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {
    ServiceNode* temp = head;

    while (temp != nullptr) {
        ServiceNode* next = temp->right;
        delete temp;
        temp = next;
    }
}