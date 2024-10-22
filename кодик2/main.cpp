#include <iostream>
#include <string>
#include "modAlphaCipher.h"

bool isValid(const int k, string &text) {
    int razm=text.size();
    if (k>razm)
        return false;
    return true;
}

int main() {
    string text;
    int key;
    unsigned vibor;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter the number of columns: ";
    cin >> key;
    if (!isValid(key, text)) {
        cout << "The key is not correct\n";
        return 1;
    }
    cout<<"Key loaded\n";
    modCipher shifr(key);
    do {
        cout << "The encoder is ready. Select option (Output-0, Encryption-1, Decryption-2): ";
        cin >> vibor;
        if (vibor > 2) {
            cout << "Incorrect operation!\n" << endl;
        } else if (vibor > 0) {
            if (vibor == 1)
                cout << shifr.encrypt(text) << endl;
            else
                cout << shifr.decrypt(text) << endl;
        }
    } while (vibor != 0);
    return 0;
}


