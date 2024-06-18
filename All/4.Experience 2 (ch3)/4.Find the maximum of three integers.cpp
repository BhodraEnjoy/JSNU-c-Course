#include <iostream>

using namespace std;
int main()
 {

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    int maximum = num1;

    if (num2 > maximum) {
        maximum = num2;
    }

   if (num3 > maximum) {
        maximum = num3;
    }


    cout << maximum;

    return 0;
}
