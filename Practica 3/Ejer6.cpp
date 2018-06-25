#include <iostream>

using namespace std;

int main() {
  int n, cont = 2;
  do {
    cout<<"Introducir N: ";
    cin>>n;
  } while(n <= 0);

  cout<<"N="<<n<<" --> sus factores primos son: "<<endl;
  if (n > 1) {
    while (n != 1) {
      if (n % cont == 0) {
        n /= cont;
        cout<<cont<<" * ";
      }
      if (n % cont != 0)
        cont++;
    }
  } else if (n == 1)
    cout<<"1";

  return 0;
}
