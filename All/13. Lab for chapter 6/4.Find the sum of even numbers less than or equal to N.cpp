#include <iostream>
using namespace std;

int sum(int n) {
    int i = 2, s = 0;
    while (i <= n) {
        s += i;
        i += 2;
    }
    return s;
}

int main() {
    int N;
    cin >> N;

    cout << sum(N) << endl;

    return 0;
}

