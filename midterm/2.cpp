#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(
        i == j || i == n - 1 - j // diagonales
        || i == 0 || i == n - 1 // top and bottom
        || j == 0 || j == n - 1 // left and right
      ) {
        cout << 1 << " ";
      } else {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}