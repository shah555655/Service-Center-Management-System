#include <iostream>
#include <limits>
#include "ServiceMenu.h"
using namespace std;

void RunServiceMenu(DoublyLinkedList& services) {
    int choice, id;
    string name, type;

    do {
        cout << "\n===== SERVICE CENTER MANAGEMENT =====\n";
        cout << "1. Display Current Service\n";
        cout << "2. Move to Next Service\n";
        cout << "3. Move to Previous Service\n";
        cout << "4. Insert Service at the End\n";
        cout << "5. Insert Service After Current\n";
        cout << "6. Remove Current Service\n";
        cout << "7. Display First to Last\n";
        cout << "8. Display Last to First\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter a valid number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            services.PrintCurrent();
            break;

        case 2:
            services.Next();
            services.PrintCurrent();
            break;

        case 3:
            services.Previous();
            services.PrintCurrent();
            break;

        case 4:
            cout << "Enter Service ID: ";
            cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Customer Name: ";
            getline(cin, name);

            cout << "Enter Service Type: ";
            getline(cin, type);

            services.InsertRight(
                new ServiceNode(id, name, type)
            );
            cout << "Service added successfully.\n";
            break;

        case 5:
            cout << "Enter Service ID: ";
            cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Customer Name: ";
            getline(cin, name);

            cout << "Enter Service Type: ";
            getline(cin, type);

            services.InsertAfterCurrent(
                new ServiceNode(id, name, type)
            );
            cout << "Service added after current service.\n";
            break;

        case 6: {
            ServiceNode* removed = services.RemoveCurrent();

            if (removed != nullptr) {
                cout << "Removed Service: "
                     << removed->customerName << endl;
                delete removed;
            } else {
                cout << "No service to remove.\n";
            }
            break;
        }

        case 7:
            services.PrintForward();
            break;

        case 8:
            services.PrintBackward();
            break;

        case 9:
            cout << "Exiting Service Center System.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 9);
}