
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cin >> num;
    while (num != -1) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << num << "is a prime number" << endl;
        } else {
            cout << num << "is not a prime number" << endl;
        }
        cin >> num;
    }

    return 0;
}
