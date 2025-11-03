#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int convertToNumber(string s) {
  map<string, int> nums = { 
    {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}
  }; 


  int result = 0;
  int numOfDigits = s.size() / 3;
  for(int i = 0; i < numOfDigits; i++) {
    string word = s.substr(3 * i, 3);
    int digit = nums[word];
    result += digit * pow(10, numOfDigits - 1 - i);
  }
  return result;
}

string convertToStr(int n) {
  map<int, string> nums = { 
    {1, "ONE"}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}
  }; 

  while(n > 0) {
    int digit = n % 10;
  }
}

int main() {
  string s = "ONETWOTHR+FOUFIVSIX";

  int plusIndex = s.find('+');
  string firstPart = s.substr(0, plusIndex);
  string secondPart = s.substr(plusIndex + 1);

  cout << convertToNumber(firstPart) + convertToNumber(secondPart);

  return 0;
}