#include<bits/stdc++.h>

using namespace std;

int sm(int n1 , int n2 , int n3)
{

    int sm = n1<n2?n1:n2;
    sm = sm < n3? sm : n3;
    return sm;
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int sma = sm(a,b,c);

    cout << sma<<endl;

    return 0;
}


