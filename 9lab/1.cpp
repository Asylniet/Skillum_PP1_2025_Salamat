#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][n];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      a[i][j] = 0;
    }
  }

  for(int i = 0; i < m; i++) {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    for(int j = x1; j < x2; j++) {
      for(int k = n - y2; k < n - y1; k++) {
        a[k][j] = 1;
      }
    }
  }

  int count = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] == 1) count++;
    }
  }

  cout << count;

  return 0;
}