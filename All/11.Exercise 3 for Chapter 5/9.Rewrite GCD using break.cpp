#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin >> n1>>n2;
    int gcd = 1;
    int k ;
    k= n1>n2?n2:n1;
    while (k >=1)
    {
        if (n1 % k == 0 && n2 % k == 0)
        {
        gcd = k ;
        break;
        }
       k--;
    }
    cout << "The greatest common divisor is " << gcd << endl;
    return 0;
}
