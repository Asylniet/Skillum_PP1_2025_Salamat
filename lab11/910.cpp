#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;

    map<string, int> mp;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        string s;
        int a;
        cin >> s >> a;

        mp[s] += a;
        sum += a;
    }

    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
      v.push_back(it->second);
    }

    sort(v.begin(), v.end());

    for(int i = v.size() - 1; i >= 0; i--) {
      int points = v[i];
      for(map<string, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
        if(it->second == points) {
          double weight = points * 100 / double(sum);
          cout << it->first << " " << weight << "%" << endl;
          mp.erase(it->first);
          break;
        }
      }
    }
    
    return 0;
}