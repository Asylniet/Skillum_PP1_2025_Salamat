#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;

  if (a < 10) {
    cout << a;
  } else {
    switch(a) {
      case 10:
        cout << "A";
        break;
      case 11:
        cout << "B";
        break;
      case 12:
        cout << "C";
        break;
      case 13:
        cout << "D";
        break;
      case 14:
        cout << "E";
        break;
      case 15:
        cout << "F";
        break;
      default:
        cout << 0;
    }
  }

  return 0;
}