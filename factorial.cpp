// Librería para [cout,endl,cin]
#include <iostream>

// Espacio de nombres std
using namespace std;

int main() {
  // Instacia y asignación de variables
  int n,fac=1;

  // Título del programa
  cout<<"******** Factorial de un número ********"<<endl;

  // Introducir el número por teclado
  do {
    cout<<"Ingrese el número: ";
    cin>>n;
  } while( n < 0 );

  // Cálculo del factorial
  for(int i = 2; i <= n; i++)
    fac *= i;

  // Mostramos el resultado
  cout<<"El factorial de "<< n <<" es: " <<fac;

  // La función main retorna un número entero
  return 0;
}
