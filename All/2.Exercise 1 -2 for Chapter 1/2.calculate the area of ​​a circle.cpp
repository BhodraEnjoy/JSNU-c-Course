#include<iostream>

using namespace std;

int main()
{
    const double PI = 3.14;
    double area, radius;
    cin >>  radius;
    area = radius * radius * PI ;

    cout <<"The area is " << area;

    return 0;
}
