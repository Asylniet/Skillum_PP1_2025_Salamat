#include <iostream>

using namespace std;

// 6
// 4 3 1 2 4 1
// 3 1 1 5 4 4

int find(int array[], int size, int target) {
  for(int i = 0; i < size; i++) {
    if(array[i] == target) return i;
  }

  return -1;
}

int main() {
  int n;
  cin >> n;

  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  int counter = 0;

  for(int i = 0; i < n; i++) {
    int num;
    cin >> num;
    int index = find(a, n, num);
    if(index >= 0) {
      a[index] = -1;
      counter++;
    }
  }

  cout << counter;

  return 0;
}