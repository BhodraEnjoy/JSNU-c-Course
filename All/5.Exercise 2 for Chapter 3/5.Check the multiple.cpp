#include <iostream>

using namespace std;

int main() {
    int number;

    cin >> number;

    bool isMultipleOf2 = !(number & 1);
    bool isMultipleOf3 = ((number % 3) == 0);
    bool isMultipleOf5 = ((number % 5) == 0);
    bool isMultipleOf7 = ((number % 7) == 0);

    if (isMultipleOf2) {
        cout << 2 << endl;
    }
    if (isMultipleOf3) {
        cout << 3 << endl;
    }
    if (isMultipleOf5) {
        cout << 5 << endl;
    }
    if (isMultipleOf7) {
        cout << 7 << endl;
    }
    if (!isMultipleOf2 && !isMultipleOf3 && !isMultipleOf5 && !isMultipleOf7) {
        cout << "N" << endl;
    }

    return 0;
}

