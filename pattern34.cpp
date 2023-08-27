#include <iostream>
using namespace std;

int main() {
  int i, j, n;
  cin >> n;

  i = 1;
  while (i <= n) {
    j = 1;
    while (j <= n) {
      if (i == j || j == n) {
        cout << i;
      } else {
        cout << "*";
      }
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
/*
12
1**********1
*2*********2
**3********3
***4*******4
****5******5
*****6*****6
******7****7
*******8***8
********9**9
*********10*10
**********1111
***********12

*/
