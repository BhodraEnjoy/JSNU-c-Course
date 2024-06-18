#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k;
    cin >> k;

    int n = 1;
    while (n * n <= k) {
        n++;
    }

    cout << n << endl;

    return 0;
}
