#include <iostream>
#include <string>

using namespace std;

int main() {
    system("chcp 1251");
    string input;
    cout << "Введите текст: ";
    getline(cin, input);

    int spaces = 0, tabs = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            spaces++;
        }
        else if (input[i] == '\t') {
            tabs++;
        }
        else {
            cout << input[i];
        }

    }


    cout << "\nУдалено пробелов: " << spaces << "\nУдалено табов: " << tabs;

    return 0;
}