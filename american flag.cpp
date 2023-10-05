#include <iostream>
#include <string>

using namespace std;

int main() {
    int rows = 13;
    int cols = 54;

    // Print the top portion of the flag
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((i % 2 == 0 && j < 30) || (i % 2 == 1 && j >= 30)) {
                cout << "* ";
            } else {
                cout << "= ";
            }
        }
        cout << endl;
    }

    // Print the bottom portion of the flag
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "= ";
        }
        cout << endl;
    }

    return 0;
}
