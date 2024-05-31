#include <iostream>
#include <string>

using namespace std;

struct Pila {
    float items[10];
    int tope;
};

// Declaración de métodos
void inicializar(Pila &p);
void insertar(Pila &p, float x);
float quitar(Pila &p);
void mostrarPila(const Pila &p); // Agregamos el método mostrarPila

int main() {
    Pila p;
    float x;

    inicializar(p);

    for (int i = 0; i < 10; i++) {
        cout << "Ingresar un elemento para agregar a la pila: ";
        cin >> x;
        insertar(p, x);
    }

    cout << "Se quitó este elemento: " << quitar(p) << endl;

    // Mostramos la pila
    cout << "Elementos en la pila:" << endl;
    mostrarPila(p);

    return 0;
}

// Definición de métodos
void inicializar(Pila &p) {
    p.tope = -1;
}

void insertar(Pila &p, float x) {
    if (p.tope == 9) {
        cout << "La pila está llena" << endl;
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
        cout << "La pila ya está vacía" << endl;
        exit(1);
    }
}

void mostrarPila(const Pila &p) {
    for (int i = p.tope; i >= 0; i--) {
        cout << p.items[i] << endl;
    }
}
