#include <iostream>

using namespace std;
int main()
 {
    int num1, num2;

    cin >> num1 >> num2;

    int maxNum = (num1 > num2) ? num1 : num2;


    int lcm = maxNum;
    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {

           cout << lcm <<endl;
            break;
        }

        lcm += maxNum;
    }

    return 0;
}

