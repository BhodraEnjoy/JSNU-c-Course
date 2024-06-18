#include <iostream>
using namespace std;

int main() {
    int num;
    bool Palindrome = false;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        int Num = num;
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        if (Num == reversed && Num >= 100 && Num <= 999) {
            cout <<Num << " ";
            Palindrome = true;
        }
    }

    if (!Palindrome) {
        cout << "N";
    }

    return 0;
}
