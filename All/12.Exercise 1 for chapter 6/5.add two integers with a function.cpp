
#include <iostream>

using namespace std;

int add(int &a, int &b)
{
   int sum = a +b;
   return sum;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int r=add(n1,n2);
    cout<<r<<endl;
    return 0;
}
