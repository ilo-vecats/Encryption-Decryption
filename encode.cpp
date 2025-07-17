#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class encode {
public:
    encode() {}
    ~encode() {}

    void filldiary();
    void encrypt();
    void decrypt();

private:
    string file;
    char c;
    int key;
};

void encode::filldiary() {
    cout << "Enter filename: ";
    cin >> file;
    cin.ignore();

    ofstream fout(file);
    if (!fout.is_open()) {
        cout << "Error opening file.\n";
        return;
    }

    string text;
    char loop = '#';
    while (loop != 'x') {
        cout << "Enter text line: ";
        getline(cin, text);
        fout << text << endl;

        cout << "Type 'x' to stop, anything else to continue: ";
        cin >> loop;
        cin.ignore();
    }

    fout.close();
}

void encode::encrypt()
{
    cout << "Enter the file to encrypt: ";
    cin >> file;
    cout << "Enter encryption key (integer): ";
    cin >> key;

    fstream fin(file, ios::in);
    fstream fout("encrypted_output.txt", ios::out);

    if (!fin.is_open() || !fout.is_open()) {
        cout << "File open error during encryption!" << endl;
        return;
    }

    while (fin.get(c)) {
        char encrypted = c ^ key;  // XOR encryption
        fout.put(encrypted);
    }

    fin.close();
    fout.close();
    cout << "Encryption complete -> 'encrypted_output.txt'" << endl;
}

void encode::decrypt()
{
    cout << "Enter decryption key (same integer used for encryption): ";
    cin >> key;

    fstream fin("encrypted_output.txt", ios::in);
    fstream fout("decrypt.txt", ios::out);

    if (!fin.is_open() || !fout.is_open()) {
        cout << "File open error during decryption!" << endl;
        return;
    }

    while (fin.get(c)) {
        char decrypted = c ^ key;  // XOR decryption (same as encryption)
        fout.put(decrypted);
    }

    fin.close();
    fout.close();
    cout << "Decryption complete -> 'decrypt.txt'" << endl;
}