#include <iostream>
#include <set>

using namespace std;

int main() {
  set<string> st;

  cout << "SET EMPTY: " << st.empty() << endl;

  st.insert("4");
  st.insert("4");
  st.insert("2");
  st.insert("1");
  st.insert("6");

  st.erase("6");

  for(set<string>::iterator it = st.begin(); it != st.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}