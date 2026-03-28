#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;

    cout << "Agrega un número: ";
    cin >> numero;

    while (numero >= 2) {
        int mitad = numero / 2;

        cout << numero << " / 2 = " << mitad << endl;

        numero = mitad;
        contador++;
    }

    cout << "la division es " << contador << " veces" << endl;

    return 0;
}
/* Complejidad Big O: O(log n)
Porque en cada paso el valor se reduce a la mitad,
lo que provoca que el número de operaciones disminuya
siguiendo un patrón logarítmico.
*/
