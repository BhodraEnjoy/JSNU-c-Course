
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n - 2; ++i) {
        if (is_prime(i) && is_prime(i + 2)) {
            cout << i << " " << i + 2 << endl;
        }
    }

    return 0;
}
