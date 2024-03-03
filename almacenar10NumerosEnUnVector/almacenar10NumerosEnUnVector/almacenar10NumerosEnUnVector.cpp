// almacenar10NumerosEnUnVector.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* 3.Realice un programa que pida al usuario 10 números enteros y los almacene en un
vector. Posteriormente, se debe mostrar en pantalla el promedio de esos números, el
mayor y el menor de todos ellos.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    const int cantidadNumeros = 10;
    vector<int> numeros(cantidadNumeros);

    // Solicitar al usuario el ingreso de 10 números enteros y almacenarlos en el vector
    cout << "Ingrese 10 números enteros:" << endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Calcular el promedio
    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }
    double promedio = static_cast<double>(suma) / cantidadNumeros;

    // Encontrar el mayor y el menor
    int mayor = INT_MIN;
    int menor = INT_MAX;
    for (int num : numeros) {
        if (num > mayor) {
            mayor = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    // Mostrar resultados
    cout << "\nEl promedio de los números ingresados es: " << promedio << endl;
    cout << "El mayor número ingresado es: " << mayor << endl;
    cout << "El menor número ingresado es: " << menor << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
