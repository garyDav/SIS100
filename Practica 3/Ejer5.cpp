#include <iostream>
using namespace std;

int main() {
  int n, ter = 1;
  do {
    cout<<"Ingrese N: ";
    cin>>n;
  } while(n < 1);

  for (int i=1;i<=n;i++) {
    cout<<" + 5^"<<i<<"/"<<"(y-"<<i<<")";
  }
  cout<<endl;

  for (int i=1;i<=n;i++) {
    for (int j=1;j<=i;j++) {
      ter *= 5;
    }
    cout<<" + "<<ter<<"/"<<"(y-"<<i<<")";
    ter = 1;
  }

  return 0;
}
