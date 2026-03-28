#include <iostream>
using namespace std;

int main() {
    int n, num;
    int mayor, menor;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    cout << "Ingrese numero 1: ";
    cin >> num;

    mayor = num;
    menor = num;

    for(int i = 2; i <= n; i++) {
        cout << "Ingrese numero " << i << ": ";
        cin >> num;

        if(num > mayor) {
            mayor = num;
        }

        if(num < menor) {
            menor = num;
        }
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
