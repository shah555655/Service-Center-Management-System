#include "DoublyLinkedList.h"
#include "ServiceMenu.h"

int main() {
    DoublyLinkedList services;

    services.InsertRight(
        new ServiceNode(101, "Ahmed", "Repair")
    );

    services.InsertRight(
        new ServiceNode(102, "Ali", "Maintenance")
    );

    services.InsertRight(
        new ServiceNode(103, "Sara", "Inspection")
    );

    RunServiceMenu(services);

    return 0;
}