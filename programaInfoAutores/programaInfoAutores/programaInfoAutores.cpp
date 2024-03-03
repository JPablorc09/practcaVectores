// programaInfoAutores.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
1. Haga un programa que solicite al usuario el ingreso de 10 nombres de libros con sus
respectivos autores, números de cédula, teléfono y pseudónimo. Posteriormente, el
usuario podrá digitar el nombre del libro y con base a ello mostrar toda la información
del autor
*/

#include <iostream>
#include  <string>
#include <map>//es un contenedor que almacena elementos en pares clave-valor, solo almacena claves únicas, y las propias claves están ordenadas.
using namespace std;

struct Autor {
    string nombre;
    string cedula;
    string telefono;
    string seudonimo;
};

int main() {
    map<string, Autor> libros;

    // Solicitar al usuario el ingreso de 10 libros con sus respectivos autores
    for (int i = 0; i < 10; ++i) {
        string nombreLibro, nombreAutor, cedulaAutor, telefonoAutor, seudonimoAutor;

        cout << "Ingrese el nombre del libro " << i + 1 << ": ";
        getline(cin, nombreLibro);

        cout << "Ingrese el nombre del autor: ";
        getline(cin, nombreAutor);

        cout << "Ingrese el número de cédula del autor: ";
        getline(cin, cedulaAutor);

        cout << "Ingrese el teléfono del autor: ";
        getline(cin, telefonoAutor);

        cout << "Ingrese el pseudónimo del autor: ";
        getline(cin, seudonimoAutor);

        Autor autor = { nombreAutor, cedulaAutor, telefonoAutor, seudonimoAutor };
        libros[nombreLibro] = autor;
    }

    // Solicitar al usuario el nombre de un libro y mostrar la información del autor
    string nombreBuscado;
    cout << "\nIngrese el nombre del libro para buscar la información del autor: ";
    getline(cin, nombreBuscado);

    if (libros.find(nombreBuscado) != libros.end()) {
        Autor autor = libros[nombreBuscado];
        cout << "\nInformación del autor de '" << nombreBuscado << "':" << endl;
        cout << "Nombre: " << autor.nombre << endl;
        cout << "Cédula: " << autor.cedula << endl;
        cout << "Teléfono: " << autor.telefono << endl;
        cout << "Pseudónimo: " << autor.seudonimo << endl;
    }
    else {
        cout << "\nEl libro '" << nombreBuscado << "' no se encontró." << endl;
    }

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
