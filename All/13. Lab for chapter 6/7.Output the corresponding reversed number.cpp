#include <iostream>
using namespace std;

void reverse(int number) {
    while (number != 0) {
        cout << number % 10;
        number = number / 10;
    }
}

int main() {
    int num;
    while (true) {
        cin >> num;
        if (num == 0)
            break;


        reverse(num);
        cout << " ";
    }

    cout << endl;

    return 0;
}
