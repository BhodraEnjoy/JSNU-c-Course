#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}