
#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 1;


    cin >> num;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num)
                sum += num / i;
        }
    }

    if (sum == num && num != 1) {
        cout << num <<"is a perfect number!" << endl;
    } else {
       cout << num <<"is not a perfect number!" << endl;
    }

    return 0;
}
