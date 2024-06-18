
#include <iostream>
using namespace std;

int main() {
    int number, largest, count = 0;
    cin >> number;
    largest = number;

    do {
        cin >> number;

        if (number > largest) {
            largest = number;
            count = 1;
        } else if (number == largest) {
            count++;
        }
    } while (number != 0);

    cout<<"The largest number is "<< largest<<endl;
    cout<<"The occurrence count of the largest number is "<<count << endl;

    return 0;
}
