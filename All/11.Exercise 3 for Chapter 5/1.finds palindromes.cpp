#include <iostream>
using namespace std;
int main() {
    int num;
    bool foundPalindrome = false;

    while (true) {
       cin >> num;
        if (num == 0)
            break;

        if (num >= 100 && num <= 999) {
            int originalNum = num;
            int reverseNum = 0;
            while (num != 0) {
                reverseNum = reverseNum * 10 + num % 10;
                num /= 10;
            }
            if (originalNum == reverseNum) {
               cout << originalNum << " ";
                foundPalindrome = true;
            }
        }
    }

    if (!foundPalindrome)
       cout << "N";

    cout << endl;

    return 0;
}
