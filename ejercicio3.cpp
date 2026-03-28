#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;

    cout << "cuantos numeros vas a ingresar: ";
    cin >> cantidad;

    vector<int> nums(cantidad);

    // lee

    for (int i = 0; i < cantidad; i++) {
        cout << "ingrese numero " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "parejas:" << endl;

    // Generar parejas
    for (int i = 0; i < cantidad; i++) {
        for (int j = 0; j < cantidad; j++) {
            if (i != j) {
                cout << "(" << nums[i] << ", " << nums[j] << ")" << endl;
            }
        }
    }

    return 0;
}

/*Complejidad Big O: O(n²)
Porque se utilizan dos ciclos para generar todas las combinaciones posibles de los numeros
lo que hace que el numero de operaciones crezca de forma cuadratica a la cantidad de datos.
*/
