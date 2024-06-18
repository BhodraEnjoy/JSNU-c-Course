#include <iostream>

using namespace std;

void show(int n) {
  int count = 0;
  for (int i = 3; count < n; i += 3) {
    cout << i << " ";
    count++;
    if (count % 5 == 0 && count != 0) {
      cout << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;

  show(n);

  return 0;
}
