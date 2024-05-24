// Estructura pila con Arreglos que posee 10 elementos donde trabaja con el tipo de dato FLOAT y borra un elemento

#include <iostream>
#include <string>

using namespace std;

struct Pila {
    float items[10]; // Cambiamos el tipo de dato a float
    int tope;
};

// Declaración de métodos
void inicializar(Pila &p);
void insertar(Pila &p, float x); // Cambiamos el tipo de dato a float
float quitar(Pila &p); // Cambiamos el tipo de dato a float

int main() {
    Pila p;
    float x; // Cambiamos el tipo de dato a float

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

void insertar(Pila &p, float x) {
    if (p.tope == 9) {
        cout << "La pila está llena";
    } else {
        p.tope++;
        p.items[p.tope] = x;
    }
}

float quitar(Pila &p) {
    if (p.tope >= 0) {
        float x = p.items[p.tope];
        p.tope--;
        return x;
    } else {
        cout << "La pila ya está vacía";
        exit(1);
    }
}