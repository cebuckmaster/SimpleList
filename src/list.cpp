#include "./include/list.h"

void List::print_menu() {

    int choice;

    cout << "*****************************\n";
    cout << " 1 - Print list. \n";
    cout << " 2 - Add to list. \n";
    cout << " 3 - Delete from list. \n";
    cout << " 4 - Quit. \n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if (choice == 4) {
        exit(0);
    } else if (choice == 1) {
        print_list();
    } else if (choice == 2) {
        add_item();
    } else if (choice == 3) {
        delete_item();
    } else {
        cout << "Sorry choice not implemented yet. \n";
    }

}

void List::add_item() {

    string item;

    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** Add Item ****\n";
    cout << "Type in an item and press enter: ";
    cin >> item;

    list.push_back(item);

    cout << "Successfully added item to the list \n\n\n\n";
    cin.clear();

    print_menu();

}

void List::delete_item() {

    int choice;

    cout << "**** Delete Item ****\n";
    cout << "Select an item index number to delete \n";
    if (list.size() > 0) {
        for(int i = 0; i < (int)list.size(); i++) {
            cout << i << ": " << list[i] << endl;
        }
        cout << "****************\n";
        cin >> choice;
        cin.clear();
        if (choice <= (int)list.size()) {
            list.erase(list.begin()+choice);
        }

    } else {
        cout << "No Items to delete \n ";
    }


}

void List::print_list() {

    char choice;

    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** Printing List ****\n";
    if (list.size() > 0) {
        for(int i = 0; i < (int)list.size(); i++) {
            cout << "**  " << list[i] << "  **" << endl;
        }
        cout << "*********************\n";
    } else {
        cout << "No Items in List \n ";
    }

    cout << "M = Menu \n";
    cin >> choice;
    cin.clear();

    if (choice == 'M' || choice == 'm') {
        print_menu();
    } else {
        cout << "Invalid Choice... Quitting \n";
        exit(0);
    }

}
