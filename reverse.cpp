#include <iostream>

using namespace std;

int main() {
    int num, reversed = 0;
    cout << "enter the number";
    cin >> num;
    int original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed*10 + digit;
        num /= 10;
    }
    cout << "reversed digits " << reversed << endl;
    return 0;

}