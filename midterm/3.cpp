#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;

  int min = a % 10;
  int max = a % 10;

  while(a > 0) {
    int current = a % 10;

    if (current > max) max = current;
    if (current < min) min = current;

    a /= 10;
  }

  cout << max << " " << min;

  return 0;
}