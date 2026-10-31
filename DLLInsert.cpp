#include "DoublyLinkedList.h"

void DoublyLinkedList::InsertRight(ServiceNode* node) {
    if (node == nullptr) return;

    node->left = tail;
    node->right = nullptr;

    if (tail != nullptr)
        tail->right = node;
    else
        head = node;

    tail = node;

    if (current == nullptr)
        current = node;
}

void DoublyLinkedList::InsertAfterCurrent(ServiceNode* node) {
    if (node == nullptr) return;

    if (current == nullptr) {
        InsertRight(node);
        return;
    }

    node->left = current;
    node->right = current->right;

    if (current->right != nullptr)
        current->right->left = node;
    else
        tail = node;

    current->right = node;
}

ServiceNode* DoublyLinkedList::RemoveCurrent() {
    if (current == nullptr)
        return nullptr;

    ServiceNode* removed = current;
    ServiceNode* previous = current->left;
    ServiceNode* next = current->right;

    if (previous != nullptr)
        previous->right = next;
    else
        head = next;

    if (next != nullptr)
        next->left = previous;
    else
        tail = previous;

    current = (next != nullptr) ? next : previous;

    removed->left = nullptr;
    removed->right = nullptr;

    return removed;
}