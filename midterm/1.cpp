#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];

  int max = 0;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    
    if (i == 0) max = a[i];

    if (a[i] > max) max = a[i];
  }

  for(int i = 0; i < n; i++) {
    a[i] == max ? cout << 0 : cout << a[i];
    cout << " ";
  }

  return 0;
}