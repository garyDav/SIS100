#include <iostream>
using namespace std;

int main() {
  int n, inc = 1;
  float x, expo = 1, ter = 0;

  cout<<"Introducir X: ";
  cin>>x;
  do {
    cout<<"Introducir N: ";
    cin>>n;
  } while(n <= 0);

  for (int i=1;i<=n;i++) {
    for (int j=1;j<=inc;j++)
      expo *= x;

    if (i % 2) {
      ter += expo / inc;
      cout<<" + "<<"x^"<<inc<<"/"<<inc;
    } else {
      ter -= expo / inc;
      cout<<" - "<<"x^"<<inc<<"/"<<inc;
    }

    inc += 2;
    expo = 1;
  }
  cout<<endl<<"Arctg("<<x<<")= "<<ter<<endl;

  return 0;
}
