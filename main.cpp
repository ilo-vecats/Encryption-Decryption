#include <iostream>
#include "encode.cpp"
using namespace std;

int main()
{
    encode enc;
    char choice;

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. Fill Diary\n";
        cout << "2. Encrypt File\n";
        cout << "3. Decrypt File\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case '1':
            enc.filldiary();
            break;
        case '2':
            enc.encrypt();
            break;
        case '3':
            enc.decrypt();
            break;
        case '4':
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}