
#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    while (num != -1) {
        sum += num;
        cin >> num;
    }
    cout << sum << endl;

    return 0;
}
