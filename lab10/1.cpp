#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> mp;

  cout << "MAP EMPTY: " << mp.empty() << endl;

  mp[4] = 40;
  mp[3] = 30;
  mp[2] = 20;
  mp[1] = 5;
  mp[1] = 10;

  mp.erase(4);

  for(map<int, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}