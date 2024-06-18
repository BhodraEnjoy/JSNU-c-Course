#include <iostream>
using namespace std;
int main() {
    int start, end;
    int sum = 0;


    cin >> start >> end;


    for (int i = start; i <= end; ++i) {

        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }

    cout<< sum << endl;

    return 0;
}

