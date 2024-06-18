
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }
    cout << endl;

    return 0;
}
