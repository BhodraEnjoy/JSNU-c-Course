#include <iostream>
using namespace std;

int main() {
    for(int i = 100; i < 1000; ++i) {
        int original = i;
        int sum = 0;
        while(original > 0) {
            int digit = original % 10;
            sum += digit * digit * digit;
            original /= 10;
        }
        if(sum == i) {
            cout << i << " ";
        }
    }
    return 0;
}



