#include <iostream>
using namespace std;

int getPentagonalNumber(int num) {
    return num * (3 * num - 1) / 2;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; count < n; ++i) {
        int pentagonal = getPentagonalNumber(i);
        cout << pentagonal << " ";
        count++;
        if (count % 10 == 0 && count != n) {
            cout << endl;
        }
    }

    return 0;
}

