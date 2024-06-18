#include <iostream>
#include <cctype>
using namespace std;

string getGradeLevel(char grade) {
    grade = toupper(grade);
    if (grade == 'A')
        return "90~100";
    else if (grade == 'B')
        return "80~89";
    else if (grade == 'C')
        return "70~79";
    else if (grade == 'D')
        return "60~69";
    else if (grade == 'E')
        return "less than 60";
    else
        return "Input is incorrect";
}

int main() {
    char grade;

    cin >> grade;

    string level = getGradeLevel(grade);

    cout << level << endl;

    return 0;
}
