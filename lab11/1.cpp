#include <iostream>
#include <map>

using namespace std;

// {
//   "Alikhan": "lalala",
//   "Slava": "kpss"
// }

int main() {
  map<string, string> mp;
  mp["Alikhan"] = "hello";

  // not found
  // if(mp.find("Alikhan") == mp.end())

  // found
  // if(mp.find("Alikhan") != mp.end())

  cout << bool(mp.find("Alikhan") != mp.end());

  return 0;
}