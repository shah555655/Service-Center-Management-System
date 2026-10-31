#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

void DoublyLinkedList::Next() {
    if (current != nullptr && current->right != nullptr)
        current = current->right;
    else
        cout << "No next service available.\n";
}

void DoublyLinkedList::Previous() {
    if (current != nullptr && current->left != nullptr)
        current = current->left;
    else
        cout << "No previous service available.\n";
}