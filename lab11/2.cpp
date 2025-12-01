#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  map<string, set<int> > mp;

  string s;
  int m;

  mp[s].insert(m);

  mp[s].size();

  for(map<string, set<int> >::iterator it = mp.begin(); it != mp.end(); it++) {
    // it->first: string
    // it->second: set<int>
    // it->second.size()
  }

  return 0;
}