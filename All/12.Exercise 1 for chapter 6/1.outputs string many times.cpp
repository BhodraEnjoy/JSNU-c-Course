#include<iostream>

using namespace std;

void Pri(int &n)
{

    for(int i = 1 ; i <=n; i++ )
    {
        cout <<"Welcome to C++!"<<endl;;
    }
}

int main()
{
    int n ;
    cin >> n;
    Pri(n);

    return 0;

}
