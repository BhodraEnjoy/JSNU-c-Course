#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number >= 100 && number <= 999) {

        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;


        if (digit1 + digit2 + digit3 == 10) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }

    return 0;
}

