#include<bits/stdc++.h>

using namespace std;
int min(int &x, int &y)
{
  return (x < y) ? x : y;
}

int main()
{

        int x, y;
        cin >> x>>y;
       int num = min(x,y);
       cout <<num<<endl;

    return 0;

}
