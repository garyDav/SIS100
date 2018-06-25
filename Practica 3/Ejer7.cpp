#include <iostream>

using namespace std;

int main() {
  int x, y, cont = 2, mcd = 1;
  bool bx = false, by = false;
  do {
    cout<<"Introducir X: ";
    cin>>x;
    cout<<"Introducir Y: ";
    cin>>y;
  } while(x <= 0 || y <= 0);

  if (x > 1 && y > 1) {
    while (x != 1 && y != 1) {
      if (x % cont == 0) {
        x /= cont;
        bx = true;
      }
      if (y % cont == 0) {
        y /= cont;
        by = true;
      }
      if (bx && by)
        mcd *= cont;
      else
        cont++;
      bx = false;
      by = false;
    }
  } else if (x == 1 && y == 1)
    cout<<"1";
  cout<<"Maximo Común divisor: "<<mcd;

  return 0;
}
