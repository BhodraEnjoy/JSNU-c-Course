#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n1, n2, n3;


   cin >> n1 >> n2 >> n3;

    cout << n1 << "!=" << factorial(n1) << endl;
    cout << n2 << "!=" << factorial(n2) << endl;
    cout << n3 << "!=" << factorial(n3) << endl;

    return 0;
}

