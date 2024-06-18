#include <iostream>

using namespace std;

int main() {
    int startYear, endYear;
    bool leapYearFound = false;

    cin >> startYear >> endYear;
    for (int year = startYear; year <= endYear; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year <<"is a leap year" << endl;
            leapYearFound = true;
        }
    }

    if (!leapYearFound) {
        cout << startYear  << endYear << endl;
    }

    return 0;
}



