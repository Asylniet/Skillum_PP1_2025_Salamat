#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10) {
      cout << char('0' + n);
      // '0' ASCII код бойынша 48
      // сонда char(48 + n)
      // бұл біз қалаған int санды char-ға айналдырады 

      // Мысалы: n = 5
      // сонда char(48 + 5) -> ол ASCII код бойынша '5'
    } else {
      cout << char('A' + (n - 10));
      // 'A' ASCII код бойынша 65
      // сонда char(65 + (n - 10))
      // n-нан 10өды азайтамыз, себебі біздегі 10 - A, 11 - B, 12 - C және т.б.

      // Мысалы: n = 10
      // сонда char(65 + 10 - 10) -> 'A'
      // Мысал 2: n = 11;
      // сонда char(65 + 11 - 10) -> char(66) -> 'B'
    }

    return 0;
}

// ASCII Table link:
// https://www.gcsecs.com/uploads/2/6/5/0/26505918/ascii-table_orig.png