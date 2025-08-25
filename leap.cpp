#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Enter the year" << endl;
        return 1;
    }

    int a = stoi(argv[1]);

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        cout << "this is a leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }

    return 0;
}
