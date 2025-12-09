#include <iostream>
#include <stack>

using namespace std;

// 3 + 4
// 3 4 +

// 3 + 4 / 2
// 3 4 + 2 /

// 3 + (4 / 2)
// 3 (4 / 2) +

// 3 + 4 / 20
// firstPart = 3 4 +
// secondPart = 20
// operation = /

// 3 4 + 20 /

// (2 * 6) + (4 / 2) + 0
// (2 * 6) + (4 / 2) 0 +
// (2 * 6) (4 / 2) + 0 +
// 2 6 * 4 2 / + 0 +


// 2 + (1 + (3 + 5)) + 2 + (3 - 5)

// (1 + (3 + 5))

int findClosingBracket(string s) {
  stack<char> st;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] != '(' && s[i] != ')') continue;

    if(s[i] == ')' && !st.empty() && st.top() == '(') {
      st.pop();
    } else {
      st.push(s[i]);
    }

    if(st.empty()) return i;
  }

  return -1;
}

string postfix(string s) {
  string firstPart, secondPart, operation;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ') continue;

    if(s[i] == '(') {
      int closeIndex = findClosingBracket(s.substr(i));
      string scope = s.substr(i + 1, closeIndex - 1);

      if(operation == "") {
        firstPart = postfix(scope);
      } else {
        secondPart = postfix(scope);
      }

      i += closeIndex + 1;
      continue;
    }

    if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
      if(operation != "") {
        firstPart += " " + secondPart + " " + operation;
        secondPart = "";
      }

      operation = s[i];
      continue;
    }

    if(operation == "") {
      firstPart += s[i];
    } else {
      secondPart += s[i];
    }
  }

  return firstPart + " " + secondPart + " " + operation;
}

int main() {
  string s;
  getline(cin, s);

  cout << postfix(s);
  
  return 0;
}