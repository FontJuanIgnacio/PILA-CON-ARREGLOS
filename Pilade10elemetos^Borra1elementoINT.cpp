// Estructura pila con Arreglos que posee 10 elementos donde trabaja con el tipo de dato INT o ENTEROS y borra un elemento

#include <iostream>
using namespace std;

struct Pila {
    int items[10];
    int tope;
};

// Declaración de métodos
void inicializar(Pila &p);
void insertar(Pila &p, int x);
int quitar(Pila &p);
void mostrarPila(const Pila &p); // Nueva metodo para mostrar la pila en el orden real de una pila

int main() {
    Pila p;
    int x = 0;

    inicializar(p);

    for (int i = 0; i < 10; i++) {
        cout << "Ingresar un elemento para agregar a la pila: ";
        cin >> x;
        insertar(p, x);
    }

    cout << "Se quitó este elemento: " << quitar(p) << endl;

    cout << "Elementos en la pila en el orden real de una pila:" << endl;
    mostrarPila(p);

    return 0;
}

// Definición de métodos
void inicializar(Pila &p) {
    p.tope = -1;
}

void insertar(Pila &p, int x) {
    if (p.tope == 9) {
        cout << "La pila está llena" << endl;
    } else {
        p.tope++;
        p.items[p.tope] = x;
    }
}

int quitar(Pila &p) {
    if (p.tope >= 0) {
        int x = p.items[p.tope];
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
