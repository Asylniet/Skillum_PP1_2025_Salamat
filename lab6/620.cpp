#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s = "ONETWOTHR+FOUFIVSIX";
  // cin >> s;

  // ONETWOTHR+FOUFIVSIX
  // '1' + '2' + '3' = "123" -> 3 * 1 + 2 * 10 + 1 * 100 = 123
  // 123+456


  string curNum = "";
  string collectedNum = "";
  int firstNum, secondNum;
  for(int i = 0; i < s.size(); i++) {
    curNum += s[i];

    if(curNum.size() == 3) {
      if(curNum == "ONE") {
        collectedNum += '1';
      } else if(curNum == "TWO") {
        collectedNum += '2';
      } else if(curNum == "THR") {
        collectedNum += '3';
      } else if(curNum == "FOU") {
        collectedNum += '4';
      } else if(curNum == "FIV") {
        collectedNum += '5';
      } else if(curNum == "SIX") {
        collectedNum += '6';
      } else if(curNum == "SEV") {
        collectedNum += '7';
      } else if(curNum == "EIG") {
        collectedNum += '8';
      } else if(curNum == "NIN") {
        collectedNum += '9';
      } else if(curNum == "ZER") {
        collectedNum += '0';
      }
      curNum = "";
    }

    if(s[i] == '+' || i == s.size() - 1) {
      int num = 0;
      for(int j = collectedNum.size() - 1; j >= 0; j--) {
        num += (collectedNum[j] - '0') * pow(10, collectedNum.size() - 1 - j);
      }
      
      if(s[i] == '+') firstNum += num;
      else secondNum += num;

      curNum = "";
      collectedNum = "";
    }
  }

  cout << firstNum + secondNum;

  return 0;
}