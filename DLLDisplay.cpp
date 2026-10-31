#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

void DoublyLinkedList::PrintCurrent() {
    if (current == nullptr) {
        cout << "No current service.\n";
        return;
    }

    cout << "\nCurrent Service\n";
    cout << "Service ID: " << current->serviceID << endl;
    cout << "Customer Name: " << current->customerName << endl;
    cout << "Service Type: " << current->serviceType << endl;
}

void DoublyLinkedList::PrintForward() {
    if (IsEmpty()) {
        cout << "No services available.\n";
        return;
    }

    ServiceNode* temp = head;
    cout << "\nServices (First to Last):\n";

    while (temp != nullptr) {
        cout << temp->serviceID << " - "
             << temp->customerName << " - "
             << temp->serviceType;

        if (temp == current)
            cout << " [CURRENT]";

        cout << endl;
        temp = temp->right;
    }
}

void DoublyLinkedList::PrintBackward() {
    if (IsEmpty()) {
        cout << "No services available.\n";
        return;
    }

    ServiceNode* temp = tail;
    cout << "\nServices (Last to First):\n";

    while (temp != nullptr) {
        cout << temp->serviceID << " - "
             << temp->customerName << " - "
             << temp->serviceType;

        if (temp == current)
            cout << " [CURRENT]";

        cout << endl;
        temp = temp->left;
    }
}