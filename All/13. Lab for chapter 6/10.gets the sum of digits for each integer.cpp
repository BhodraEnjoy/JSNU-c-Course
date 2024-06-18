
#include <iostream>
using namespace std;

int sumdigits(int n) {
    int n1, n2, n3;
    n1 = n / 100;
    n3 = n % 10;
    n2 = n / 10 % 10;
    return (n1 + n2 + n3);
}

int main() {
    int num;


    cin >> num;

    while (num != 0) {
        cout <<sumdigits(num)<<" ";
        cin >> num;
    }

    return 0;
}


