#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;

    while (true) {
        cin >> num;
        if (num == 0)
            break;
        sum += num;
        count++;
    }

    if (count == 0) {
        cout << "No numbers entered." << endl;
    } else {
        double average = static_cast<double>(sum) / count;
        cout << "sum is " << sum << endl;
        cout << "average is " << fixed << setprecision(2) << average << endl;
    }

    return 0;
}
