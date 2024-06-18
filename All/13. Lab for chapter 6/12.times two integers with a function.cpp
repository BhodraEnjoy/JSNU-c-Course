#include <iostream>

using namespace std;

int times(int a , int b)
{
   return a * b;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int r=times(n1,n2);
    cout<<r<<endl;
    return 0;
}


