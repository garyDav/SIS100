#include <iostream>

using namespace std;

int main() {
  int n, r, c, res, n_fac = 1, res_fac = 1;
  do {
    cout<<"Introducir N: ";
    cin>>n;
    cout<<"Introducir R: ";
    cin>>r;
  } while(n <= 0 || r <= 0 || n < r);
  res = n-r;
  for (int i=2;i<=n;i++) {
    n_fac *= i;
  }
  for (int i=2;i<=res;i++) {
    res_fac *= i;
  }
  c = n_fac/res_fac;

  cout<<"C: "<<c;

  return 0;
}
