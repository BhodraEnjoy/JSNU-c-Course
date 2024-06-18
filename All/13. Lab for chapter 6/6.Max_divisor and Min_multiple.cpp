#include <iostream>
using namespace std;
int gcd(int a, int b) {
    int r;
    while (b > 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    int max_divisor = gcd(num1, num2);
    int min_multiple = lcm(num1, num2);


   cout <<"Max_divisor="<< max_divisor << endl;
    cout<<"Min_multiple="<< min_multiple << endl;

    return 0;
}

