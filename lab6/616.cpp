#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  // he is avesone y0u are au3some t00

  string curWord = "";
  bool hasNumber = false;
  for(int i = 0; i < s.size(); i++) {
    curWord += s[i];

    if(s[i] >= '0' && s[i] <= '9') {
      hasNumber = true;
    }

    if(s[i] == ' ' || i == s.size() - 1) {
      if(!hasNumber) cout << curWord << endl;
      hasNumber = false;
      curWord = "";
    }
  }

  return 0;
}