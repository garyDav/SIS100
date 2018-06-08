// Librería para [cout,endl,cin]
#include <iostream>

// Espacio de nombres std
using namespace std;

int main() {
  // Instacia y asignación de variables
  unsigned v_goku = 100, v_vegeta = 100; // vidas
  unsigned a_goku = 50, a_vegeta = 45; // daño de ataque
  unsigned turno = 1;

  // Título del programa
  cout<<"******** Goku VS Vegeta ********"<<endl;

  // Combate
  while (v_goku > 0 && v_vegeta > 0) {
    // Si el turno es 1, ataca goku
    if (turno == 1) {
      v_vegeta -= a_goku;
      turno = 0;
    } else {
      v_goku -= a_vegeta;
      turno = 1;
    }
  }

  // Mostramos el resultado
  if(v_goku <= 0 && v_vegeta > 0)
    cout<<"¡Ganó Vegeta!"<<endl;
  else
    cout<<"¡Ganó Goku!"<<endl;

  // La función main retorna un número entero
  return 0;
}
