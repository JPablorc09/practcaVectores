// busquedaNumerosEnteros.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*2.Diseñe un programa que solicite al usuario el ingreso de 15 números enteros. Una vez
ingresados se debe mostrar un menú con 3 opciones: ordenar ascendentemente,
ordenar descendentemente y buscar. Cualquiera que sea la opción elegida, se debe
mostrar en pantalla el resultado.*/

#include <algorithm>
#include <iostream>
using namespace std;

    int main() {
        const int n = 15;
        int numeros[n];

        // Solicitar al usuario el ingreso de 15 números enteros
        cout << "Ingrese 15 números enteros:" << endl;
        for (int i = 0; i < n; ++i) {
            cout << "Número " << i + 1 << ": ";
            cin >> numeros[i];
        }

        // Menú de opciones
        int opcion;
        do {
            cout << "\nMenú:" << endl;
            cout << "1. Ordenar ascendentemente" << endl;
            cout << "2. Ordenar descendentemente" << endl;
            cout << "3. Buscar número" << endl;
            cout << "0. Salir" << endl;
            cout << "Seleccione una opción: ";
            cin >> opcion;

            switch (opcion) {
            case 1:
                // Ordenar ascendentemente
                sort(numeros, numeros + n);
                cout << "\nNúmeros ordenados ascendentemente:" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                // Ordenar descendentemente
                sort(numeros, numeros + n, greater<int>());
                cout << "\nNúmeros ordenados descendentemente:" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;
            case 3:
                // Buscar número
                int num;
                cout << "\nIngrese el número a buscar: ";
                cin >> num;
                if (binary_search(numeros, numeros + n, num)) {
                    cout << "El número " << num << " está presente en la lista." << endl;
                }
                else {
                    cout << "El número " << num << " no está presente en la lista." << endl;
                }
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
            }
        } while (opcion != 0);

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
