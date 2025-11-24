#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, pair<int, int> > mp;

  // 3
  // asman 4
  // pes 2
  // asman 3

  // mp["asman"] = { 7, 2 }
  // mp["pes"] = { 2, 1 }
  
  for(int i = 0; i < n; i++) {
    string name;
    int gpa;
    cin >> name >> gpa;

    mp[name].first += gpa;
    mp[name].second++;
  }

  for(map<string, pair<int, int> >::iterator it = mp.begin(); it != mp.end(); it++) {
    // it->first - name
    // it->second - { int, int }
    // { int, int }.first - gpa_sum
    // { int, int }.second - gpa_count
    double result = it->second.first / double(it->second.second);
    cout << it->first << " ";
    printf("%.3f", result);
    cout << endl;
  }


  return 0;
}