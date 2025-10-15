#include <iostream>
using namespace std;

int main (){
    int a;
    cin >> a;
    // 100001101
    for (int i = 0; i < 9; i++) {
        a ^= (1 << i);
        cout << (1 << i) << " - " << a << endl;
    }
    // cout << a;
    return 0;
}