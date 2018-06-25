#include <iostream>
using namespace std;

int main() {
  long int lim_inf = 6, lim_sup = 13, fac = 1;

  for (long int i=lim_inf;i<=lim_sup;i++) {
    for (long int j=2;j<=i;j++) {
      fac *= j;
    }
    cout<<i<<"! = "<<fac<<endl;
    fac = 1;
  }

  return 0;
}
