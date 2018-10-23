// Este codigo ha sido generado por el modulo psexport 20180125-mac de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float dig;
	int m1;
	int m2;
	float n;
	float pot;
	float s;
	dig = 0;
	do {
		cout << "Introduzca N: " << endl;
		cin >> n;
	} while (n<=0);
	m1 = n;
	m2 = n;
	s = 0;
	cout << "S = " << endl;
	while (int(m1)!=0) {
		dig = m1%10;
		m2 = int(m1/10);
		pot = m2%10;
		cout << dig << "^" << pot << endl;
		s = s+(pow(dig,pot));
		m1 = int(m1/10);
	}
	cout << "Suma = " << s-1 << endl;
	return 0;
}

