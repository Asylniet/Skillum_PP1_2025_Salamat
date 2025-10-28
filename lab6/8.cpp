#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
  for(int i = 0; i < str.size() / 2; i++) {
    if (str[i] != str[str.size() - 1 - i]) {
      return false;
    }
  }

  return true;
}

string removeChar(string s, int index) {
  string newStr = "";
  for (int i = 0; i < s.size(); i++) {
    if(i != index) newStr += s[i];
  }
  return newStr;
}

int main() {  
  string s;
  cin >> s;

  // "abcca"
  // a - a
  // b - c -> isPalindrome("acca") || isPalindrome("abca")

  for(int i = 0; i < s.size() / 2; i++) {
    if(s[i] != s[s.size() - 1 - i]) {
      string firstStr = removeChar(s, i);
      string secondStr = removeChar(s, s.size() - 1 - i);
      if(isPalindrome(firstStr) || isPalindrome(secondStr)) {
        cout << "YES";
      } else {
        cout << "NO";
      }

      return 0;
    }
  }

  cout << "YES";

  return 0;
}