#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int smallestFactor = 2;
    for (; smallestFactor < n; ++smallestFactor) {
        if (n % smallestFactor == 0) {
            break;
        }
    }

    int largestFactor = n / smallestFactor;

    cout << largestFactor << endl;

    return 0;
}


