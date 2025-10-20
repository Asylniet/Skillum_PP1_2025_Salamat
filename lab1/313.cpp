#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool even = false;
  int oddSum = 0;
  int evenSum = 0;
  
  while(n > 0) {
    int reminder = n % 10;
    // isEven ? evenSum += reminder : oddSum += reminder;
    if (isEven == true) {
      evenSum += reminder;
    } else {
      oddSum += reminder;
    }

    isEven = !isEven;
    n  /= 10;
  }

  // evenSum == oddSum ? cout << "YES" : cout << "NO";

  if (evenSum == oddSum) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}