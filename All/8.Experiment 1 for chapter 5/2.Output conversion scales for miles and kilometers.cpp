#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << "Miles  Kilometers" << endl;

    cout << fixed << setprecision(3);

    for (int i = 1; i <= n; ++i) {
        double kilometers = i * 1.609;
        cout << setw(2) << i << "   " << setw(7) << kilometers << endl;
    }

    return 0;
}


