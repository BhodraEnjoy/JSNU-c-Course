#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;


    cin >> num1 >> num2 >> num3;

    int smallest_num = num1;

    if (num2 < smallest_num)
        smallest_num = num2;
    if (num3 < smallest_num)
        smallest_num = num3;

    cout << smallest_num << endl;

    return 0;
}
