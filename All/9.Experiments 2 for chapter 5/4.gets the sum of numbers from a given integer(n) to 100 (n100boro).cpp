#include <iostream>

using namespace std;

int main() {
    int n;
    int Sum = 0;

    cin >> n;

    for (int i = n; i <= 100; ++i) {
      Sum += i;
    }

    cout <<Sum << endl;

    return 0;
}
