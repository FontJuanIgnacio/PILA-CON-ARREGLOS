// Estructura pila con Arreglos que posee 10 elementos donde trabaja con el tipo de dato STRING y borra un elemento

#include <iostream>
#include <string> // Agregamos esta línea para usar el tipo de dato string

using namespace std;

struct Pila {
    string items[10]; // Cambiamos el tipo de dato a string
    int tope;
};

// Declaración de métodos
void inicializar(Pila &p);
void insertar(Pila &p, string x); // Cambiamos el tipo de dato a string
string quitar(Pila &p); // Cambiamos el tipo de dato a string

int main() {
    Pila p;
    string x; // Cambiamos el tipo de dato a string

    inicializar(p);

    for (int i = 0; i < 10; i++) {
        cout << "Ingresar un elemento para agregar a la pila: ";
        cin >> x;
        insertar(p, x);
    }

    cout << "Se quitó este elemento: " << quitar(p);

    return 0;
}

// Definición de métodos
void inicializar(Pila &p) {
    p.tope = -1;
}

void insertar(Pila &p, string x) {
    if (p.tope == 9) {
        cout << "La pila está llena";
    } else {
        p.tope++;
        p.items[p.tope] = x;
    }
}

string quitar(Pila &p) {
    if (p.tope >= 0) {
        string x = p.items[p.tope];
        p.tope--;
        return x;
    } else {
        cout << "La pila ya está vacía";
        exit(1);
    }
}
