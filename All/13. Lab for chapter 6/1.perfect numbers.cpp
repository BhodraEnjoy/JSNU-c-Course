#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void printPerfectNumbers(int n) {
    for (int i = 2; i < n; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    printPerfectNumbers(n);
    return 0;
}
