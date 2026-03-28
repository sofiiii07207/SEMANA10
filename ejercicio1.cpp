#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double promedio;

    // Pedir los números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Calcular el promedio
    promedio = (num1 + num2 + num3) / 3.0;

    // Mostrar el resultado
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
/*
Complejidad Big O: O(1) 
Justificación: El programa realiza un número fijo de operaciones independientemente de los valores de entrada (3 lecturas, 1 suma, 1 división, 1 salida), por lo que su tiempo de ejecución es constante.
*/
