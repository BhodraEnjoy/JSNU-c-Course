#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x, y;
    cin >> x >> y;

    bool found = false;

    for (int i = x; i <= y; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "N";
    }

    return 0;
}



