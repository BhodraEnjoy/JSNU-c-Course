#include <iostream>

using namespace std;

int main() {

    int percentage;

    cin >> percentage;

    if (percentage >= 90 && percentage <= 100) {
        cout << "A";
    } else if (percentage >= 80 && percentage < 90) {
        cout << "B";
    } else if (percentage >= 70 && percentage < 80) {
        cout << "C";
    } else if (percentage >= 60 && percentage < 70) {
        cout << "D";
    } else if (percentage >= 0 && percentage < 60) {
        cout << "E";
    } else {
        cout << "Invalid percentage input. Please enter a percentage in the range [0,100].";
    }

    return 0;
}
