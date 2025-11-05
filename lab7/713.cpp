#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> mp;

  while(cin && cin.peek() != '\n') {
    int n;
    cin >> n;
    mp[n] = 1;
  }

  int target;
  cin >> target;

  int counter = 0;
  int result = -1;

  for(int i = 1; i <= 1000; i++) {
    if(mp[i] == 0) {
      counter++;
    }

    if(counter == target) {
      result = i;
      break;
    }
  }

  cout << result;

  return 0;
}